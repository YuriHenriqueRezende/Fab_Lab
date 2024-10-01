
         int VD = A15; //sensor verde direita 
         int VE = A14;//sensor verde esquerda


void setup() {
            pinMode(A15, INPUT);
            pinMode(A14, INPUT);
     
Serial.begin(9600);
delay(3000);
}
void loop() {
int VD = analogRead(A15);
Serial.print("Verde Direita=");
Serial.print(VD);  

int VE = analogRead(A15);
Serial.print(" Verde Esquerda=");
Serial.print(VE);

Serial.println(" ");
delay(2000);
}



