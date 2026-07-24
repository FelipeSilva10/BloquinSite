Carrinho Controlado por Luva - Bloquin

Arquivos incluidos:
- transmissor-luva.ino: ESP32 instalado na luva, lendo o joystick e enviando dados por ESP-NOW.
- receptor-carrinho.ino: ESP32 instalado no carrinho, recebendo comandos e acionando os motores.

Antes de gravar:
1. Descubra o MAC Address do ESP32 receptor.
2. Substitua o valor de macDoCarrinho no arquivo transmissor-luva.ino.
3. Confira a pinagem do seu driver de motor antes de ligar a bateria.
4. Use GND comum entre ESP32, driver e fonte dos motores.
