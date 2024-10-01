
const int ldrPin = A15; // LDR no pino analógico 0


int ldrValue = 0; // Valor lido do LDR


void setup() {
    //Ativando o serial monitor que exibirá os valores lidos no sensor.
    Serial.begin(9600);
    //Definindo pinos digitais dos leds e buzzer como de saída.
    pinMode(ldrPin, OUTPUT);

}

void loop() {
ldrValue = analogRead(ldrPin); // lê o valor do LDR
 
  //Luminosidade baixa.
  if (ldrValue < 40) {
    //é verde robô tem que virar para o lado necessário
   
    delay(ldrValue); // espera a quantidade de milissegundos em ldrValue
  }
   
  //Luminosidade alta.
  if (ldrValue > 200) {
    // robô não leu verde, segue reto
  }
   
  //Exibindo o valor do sensor no serial monitor.
  Serial.println(ldrValue);
  
  delay(50); 
}
