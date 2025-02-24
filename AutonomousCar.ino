// definindo os pinos do sensor ultrassônico
const int trigPin = 2; 
const int echoPin = 3; 

// definindo os pinos da ponte H L9110
const int A_IA = 8; 
const int A_IB = 9; 
const int B_IA = 10; 
const int B_IB = 11; 

// distância mínima para detectar obstáculo (está em cm)
const int distanciaMinima = 10;

void setup() {
  // configura os pinos como saídas
  pinMode(A_IA, OUTPUT);
  pinMode(A_IB, OUTPUT);
  pinMode(B_IA, OUTPUT);
  pinMode(B_IB, OUTPUT);
  

  // iniciando a comunicação serial
  Serial.begin(9600);

  // configura os pinos do sensor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // mede a distância com o sensor ultrassônico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);

  // calcula a distância em centímetros
  int distance = duration * 0.0343 / 2;

  // exibe a distância no Monitor Serial
  Serial.print("Distância: ");
  Serial.print(distance);
  Serial.println(" cm");

  // verifica a distância e controla os motores
  if (distance >= distanciaMinima) {
    // se não houver obstáculo, anda em linha reta
    direcaoFrente();
  } else {
    // se houver obstáculo, vira
    direcaoVira();
    delay(500); // tempo para virar
  }

  // aguarda 500 ms antes de medir novamente
  delay(500);
}

// função para andar em linha reta
void direcaoFrente() {
  // Faz os motores andarem para frente
  // motor A para frente
  digitalWrite(A_IA, HIGH); 
  digitalWrite(A_IB, LOW);

  // motor B para frente
  digitalWrite(B_IA, HIGH); 
  digitalWrite(B_IB, LOW);
}

// Função para virar
void direcaoVira() {
  // girar Motor A no sentido horário
  digitalWrite(A_IA, HIGH); 
  digitalWrite(A_IB, LOW);  

  // girar Motor B no sentido anti-horário
  digitalWrite(B_IA, LOW);  
  digitalWrite(B_IB, HIGH); 
}

// função para parar os motores (caso queira usar a função para parar os motores, ela jã esta pronta)
void pararMotores() {
  digitalWrite(A_IA, LOW);
  digitalWrite(A_IB, LOW);
  digitalWrite(B_IA, LOW);
  digitalWrite(B_IB, LOW);
}
