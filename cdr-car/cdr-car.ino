// Motores – Saídas digitais
int motorA_PWM = 10; // Controle de velocidade do motor A (Esquerdo)
int motorB_PWM = 11; // Controle de velocidade do motor B (Direito)
int motorA_EN = 12;  // Controle de direção do motor A (Esquerdo)
int motorB_EN = 13;  // Controle de direção do motor B (Direito)
// Sensor TCRT5000 – Entradas digitais
int sensorDireito = 7;  // Pino do sensor TCRT direito
int sensorCentro = 6;   // Pino do sensor TCRT central
int sensorEsquerdo = 5; // Pino do sensor TCRT esquerdo
// Variáveis para armazenar a leitura dos sensores TCRT5000
int leituraDireito;  // Pino do sensor TCRT direito
int leituraCentro;   // Pino do sensor TCRT central
int leituraEsquerdo; // Pino do sensor TCRT esquerdo
// Velocidade PWM
int veloc0 = 0;   // Velocidade para parar os motores
int veloc1 = 190; // Velocidade motor A
int veloc2 = 190; // Velocidade motor B
int veloc3 = 170; // Velocidade motor A
int veloc4 = 170; // Velocidade motor B
void setup()
{
  // Configura os motores como saída
  pinMode(motorA_PWM, OUTPUT);
  pinMode(motorA_EN, OUTPUT);
  pinMode(motorB_PWM, OUTPUT);
  pinMode(motorB_EN, OUTPUT);
  // Configura os sensores como entrada
  pinMode(sensorDireito, INPUT);
  pinMode(sensorCentro, INPUT);
  pinMode(sensorEsquerdo, INPUT);
}

void loop()
{
  leitura();  // Chama a função de leitura dos sensores
  seguidor(); // Chama a função seguidor de linha
}
void leitura()
{
  leituraDireito = digitalRead(sensorDireito);   // Leitura do sensor direito
  leituraCentro = digitalRead(sensorCentro);     // Leitura do sensor central
  leituraEsquerdo = digitalRead(sensorEsquerdo); // Leitura do sensor esquerdo
}
void seguidor()
{
  if ((leituraDireito == 0) && (leituraCentro == 1) && (leituraEsquerdo == 0))
  {           // Sensor central detectou a linha
    frente(); // CDR CAR move para frente
  }
  if ((leituraDireito == 1) && (leituraCentro == 0) && (leituraEsquerdo == 0))
  {            // Sensor direito detectou a linha
    direita(); // CDR CAR move para a direita
  }
  if ((leituraDireito == 0) && (leituraCentro == 0) && (leituraEsquerdo == 1))
  {             // Sensor esquerdo detectou a linha
    esquerda(); // CDR CAR move para a esquerda
  }
}
void frente()
{
  // HIGH = Frente
  digitalWrite(motorA_EN, HIGH);   // Motor A.
  digitalWrite(motorB_EN, HIGH);   // Motor B. HIGH = Frente
  analogWrite(motorA_PWM, veloc1); // Motor A com pwm = veloc1
  analogWrite(motorB_PWM, veloc2); // Motor B com pwm = veloc2
}
void direita()
{
  digitalWrite(motorA_EN, HIGH);   // Motor A. HIGH = Frente
  digitalWrite(motorB_EN, LOW);    // Motor B. HIGH = Frente
  analogWrite(motorA_PWM, veloc3); // Motor A com pwm = veloc3
  analogWrite(motorB_PWM, veloc0); // Motor B com pwm = veloc0
}
void esquerda()
{
  digitalWrite(motorA_EN, LOW);    // Motor A. HIGH = Frente
  digitalWrite(motorB_EN, HIGH);   // Motor B. HIGH = Frente
  analogWrite(motorA_PWM, veloc0); // Motor A com pwm = veloc0
  analogWrite(motorB_PWM, veloc4); // Motor B com pwm = veloc4
}