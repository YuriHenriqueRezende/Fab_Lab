
         int OUT4 = 37; // sensor do da linha direita
         int OUT5 = 39; // sensor da ponta direita
         int OUT2 = 33; // sensor do meio esquerda
         int OUT1 = 31; // sensor da ponta esquerda
         int OUT3 = 35; // sensor do meio

void setup() {
            pinMode(37, INPUT);
            pinMode(39, INPUT);
            pinMode(33, INPUT);
            pinMode(31, INPUT);
            pinMode(35, INPUT);
Serial.begin(9600);
delay(3000);
}
void loop() {
int OUT4 = digitalRead(39);
Serial.print(" sensorDir=");
Serial.print(OUT4);  
int OUT5 = digitalRead(37);
Serial.print(" sensorLinhaDir=");
Serial.print(OUT5);
int OUT2 = digitalRead(33);
Serial.print(" sensorLinhaEsquerda=");
Serial.print(OUT2);
int OUT1 = digitalRead(31);
Serial.print(" sensorEsquerda=");
Serial.print(OUT1);

int OUT3 = digitalRead(35);
Serial.print(" sensorcentro=");
Serial.print(OUT3);

Serial.println(" ");
delay(2000);
}
