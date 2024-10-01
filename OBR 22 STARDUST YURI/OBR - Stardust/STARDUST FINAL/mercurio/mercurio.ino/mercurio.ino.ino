

const int pinoLed = 30; //PINO DIGITAL UTILIZADO PELO LED
const int pinoSensor = 52; //PINO DIGITAL UTILIZADO PELO SENSOR

void setup(){
  pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(pinoLed, OUTPUT); //DEFINE O PINO COMO SAÍDA
  digitalWrite(pinoLed, LOW); //LED INICIA DESLIGADO
  Serial.begin(9600);
delay(3000);
}

void loop(){
 
  if(digitalRead(pinoSensor) == HIGH){ //SE A LEITURA DO PINO FOR IGUAL A HIGH, FAZ
      digitalWrite(pinoLed, HIGH); //ACENDE O LED
      
  }else{ //SENÃO, FAZ
    digitalWrite(pinoLed, LOW); //APAGA O LED
     int pinoSensor = digitalRead(52);
      Serial.print(" pinoSensor=");
      Serial.print(pinoSensor);  
Serial.println(" ");
delay(2000);
  }
}


