#include <WiFi.h>
#include <esp_now.h>
#include <cstring>

const int PIN_EIXO_X = 34;
const int PIN_EIXO_Y = 35;
const int PIN_BOTAO = 23;

// Troque pelo MAC do ESP32 que fica no carrinho.
uint8_t macDoCarrinho[] = {0x24, 0x6F, 0x28, 0xAA, 0xBB, 0xCC};

struct PacoteControle {
  int16_t eixoX;
  int16_t eixoY;
  bool botaoPressionado;
};

int normalizarJoystick(int leitura) {
  return map(leitura, 0, 4095, -100, 100);
}

void prepararEspNow() {
  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("Erro ao iniciar ESP-NOW");
    return;
  }

  esp_now_peer_info_t peerInfo = {};
  memcpy(peerInfo.peer_addr, macDoCarrinho, 6);
  peerInfo.channel = 0;
  peerInfo.encrypt = false;

  if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("Erro ao parear com o carrinho");
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(PIN_BOTAO, INPUT_PULLUP);
  prepararEspNow();
}

void loop() {
  PacoteControle pacote;
  pacote.eixoX = normalizarJoystick(analogRead(PIN_EIXO_X));
  pacote.eixoY = normalizarJoystick(analogRead(PIN_EIXO_Y));
  pacote.botaoPressionado = digitalRead(PIN_BOTAO) == LOW;

  esp_now_send(macDoCarrinho, reinterpret_cast<uint8_t *>(&pacote), sizeof(pacote));

  Serial.printf("X:%d Y:%d Botao:%d\n", pacote.eixoX, pacote.eixoY, pacote.botaoPressionado);
  delay(80);
}
