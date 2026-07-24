#include <WiFi.h>
#include <esp_now.h>
#include <esp_idf_version.h>

const int MOTOR_ESQ_IN1 = 18;
const int MOTOR_ESQ_IN2 = 19;
const int MOTOR_ESQ_PWM = 21;

const int MOTOR_DIR_IN1 = 25;
const int MOTOR_DIR_IN2 = 26;
const int MOTOR_DIR_PWM = 27;

const int LED_STATUS = 2;

struct PacoteControle {
  int16_t eixoX;
  int16_t eixoY;
  bool botaoPressionado;
};

PacoteControle ultimoComando = {0, 0, false};
unsigned long momentoDoUltimoPacote = 0;

void controlarMotor(int in1, int in2, int pwm, int velocidade) {
  velocidade = constrain(velocidade, -255, 255);

  if (velocidade > 0) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(pwm, velocidade);
  } else if (velocidade < 0) {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    analogWrite(pwm, abs(velocidade));
  } else {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(pwm, 0);
  }
}

void moverCarrinho(int eixoX, int eixoY) {
  if (abs(eixoX) < 12) eixoX = 0;
  if (abs(eixoY) < 12) eixoY = 0;

  int velocidadeBase = map(abs(eixoY), 0, 100, 0, 255);
  int ajusteCurva = map(eixoX, -100, 100, -120, 120);

  int esquerda = velocidadeBase - ajusteCurva;
  int direita = velocidadeBase + ajusteCurva;

  if (eixoY < 0) {
    esquerda *= -1;
    direita *= -1;
  }

  controlarMotor(MOTOR_ESQ_IN1, MOTOR_ESQ_IN2, MOTOR_ESQ_PWM, esquerda);
  controlarMotor(MOTOR_DIR_IN1, MOTOR_DIR_IN2, MOTOR_DIR_PWM, direita);
}

void processarPacoteRecebido(const uint8_t *dados, int tamanho) {
  if (tamanho != sizeof(PacoteControle)) return;

  memcpy(&ultimoComando, dados, sizeof(ultimoComando));
  momentoDoUltimoPacote = millis();
}

#if ESP_IDF_VERSION_MAJOR >= 5
void aoReceberDados(const esp_now_recv_info_t *info, const uint8_t *dados, int tamanho) {
  processarPacoteRecebido(dados, tamanho);
}
#else
void aoReceberDados(const uint8_t *mac, const uint8_t *dados, int tamanho) {
  processarPacoteRecebido(dados, tamanho);
}
#endif

void setup() {
  Serial.begin(115200);

  pinMode(MOTOR_ESQ_IN1, OUTPUT);
  pinMode(MOTOR_ESQ_IN2, OUTPUT);
  pinMode(MOTOR_ESQ_PWM, OUTPUT);
  pinMode(MOTOR_DIR_IN1, OUTPUT);
  pinMode(MOTOR_DIR_IN2, OUTPUT);
  pinMode(MOTOR_DIR_PWM, OUTPUT);
  pinMode(LED_STATUS, OUTPUT);

  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("Erro ao iniciar ESP-NOW");
    return;
  }

  esp_now_register_recv_cb(aoReceberDados);
}

void loop() {
  bool sinalRecente = millis() - momentoDoUltimoPacote < 500;
  digitalWrite(LED_STATUS, sinalRecente ? HIGH : LOW);

  if (sinalRecente) {
    moverCarrinho(ultimoComando.eixoX, ultimoComando.eixoY);
  } else {
    moverCarrinho(0, 0);
  }
}
