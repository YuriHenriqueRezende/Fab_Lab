

/*------------------------------------------------------------------
* // PROGRAMAÇÃO DA EQUIPE STARDUST PARA TESTAR SENSOR HC-SR04 

------------------------------------------------------------------*/


//sensor da frente
#define echoPinf 19//Pino 19 recebe o pulso do echo
#define trigPinf 20//Pino 20 recebe pulso do trig

//sensor da direita
//#define echoPind 18//Pino 16 recebe o pulso do echo
//#define trigPind 17//Pino 17 recebe pulso do trig

//sensor da esquerda
//#define echoPine 16//Pino 14 recebe o pulso do echo
//#define trigPine 15//Pino 15 recebe pulso do trig


void setup() {
  Serial.begin (9600);
  pinMode(trigPinf, OUTPUT);
  pinMode(echoPinf, INPUT);
 // pinMode(trigPind, OUTPUT);
 // pinMode(echoPind, INPUT);
 // pinMode(trigPine, OUTPUT);
 // pinMode(echoPine, INPUT);

}

void loop() {

  //sensor da frente
  long durationf, distancef; //http://arduino.cc/en/Reference/Long
  digitalWrite(trigPinf, LOW);  //seta o pino  com um pulso baixo "LOW" ou desligado ou ainda 0
  delayMicroseconds(2); // delay de 2 microssegundos
  digitalWrite(trigPinf, HIGH); //seta o pino  com pulso alto "HIGH" ou ligado ou ainda 1
  delayMicroseconds(10);  //delay de 10 microssegundos
  digitalWrite(trigPinf, LOW); //seta o pino  com pulso baixo novamente
  durationf = pulseIn(echoPinf, HIGH);  //pulseIn lê o tempo entre a chamada e o pino entrar em high
  //Esse calculo é baseado em s = v . t, lembrando que o tempo vem dobrado
  //porque é o tempo de ida e volta do ultrassom
  distancef = (durationf/2) / 29.1;
  if (distancef >= 200 || distancef <= 0){
    Serial.println("Nada ao alcance!");

  }
  else {
    Serial.print(distancef);
    Serial.println(" cm");

  }
  delay(500);
  /*
 //sensor da direita
   long durationd, distanced; //http://arduino.cc/en/Reference/Long
  digitalWrite(trigPind, LOW);  //seta o pino  com um pulso baixo "LOW" ou desligado ou ainda 0
  delayMicroseconds(2); // delay de 2 microssegundos
  digitalWrite(trigPind, HIGH); //seta o pino  com pulso alto "HIGH" ou ligado ou ainda 1
  delayMicroseconds(10);  //delay de 10 microssegundos
  digitalWrite(trigPind, LOW); //seta o pino  com pulso baixo novamente
  durationd = pulseIn(echoPind, HIGH);  //pulseIn lê o tempo entre a chamada e o pino entrar em high
  //Esse calculo é baseado em s = v . t, lembrando que o tempo vem dobrado
  //porque é o tempo de ida e volta do ultrassom
  distanced = (durationd/2) / 29.1;
  if (distanced >= 200 || distanced <= 0){
    Serial.println("Nada ao alcance!");
  }
  else {
    Serial.print(distanced);
    Serial.println(" cm");

  }
  delay(500); 

  //sensor da esquerda
    long duratione, distancee; //http://arduino.cc/en/Reference/Long
  digitalWrite(trigPine, LOW);  //seta o pino  com um pulso baixo "LOW" ou desligado ou ainda 0
  delayMicroseconds(2); // delay de 2 microssegundos
  digitalWrite(trigPine, HIGH); //seta o pino  com pulso alto "HIGH" ou ligado ou ainda 1
  delayMicroseconds(10);  //delay de 10 microssegundos
  digitalWrite(trigPine, LOW); //seta o pino  com pulso baixo novamente
  duratione = pulseIn(echoPine, HIGH);  //pulseIn lê o tempo entre a chamada e o pino entrar em high
  //Esse calculo é baseado em s = v . t, lembrando que o tempo vem dobrado
  //porque é o tempo de ida e volta do ultrassom
  distancee = (duratione/2) / 29.1;
  if (distancee >= 200 || distancee <= 0){
    Serial.println("Nada ao alcance!");

  }
  else {
    Serial.print(distancee);
    Serial.println(" cm");

  }
  delay(500);
  */
}
