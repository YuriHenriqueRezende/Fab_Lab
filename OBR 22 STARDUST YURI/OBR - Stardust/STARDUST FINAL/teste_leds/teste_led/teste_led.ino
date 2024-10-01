
               int LED1 = 13; // led direita
               int LED2 = 47;//led esquerda
               


void setup() {
                 pinMode(13, OUTPUT);
                 pinMode(47, OUTPUT);
             
                
}

void loop() {

       digitalWrite(LED1, HIGH);
      delay (1000);
       digitalWrite(LED1, LOW);
 
      delay (1000);
 
   digitalWrite(LED2, HIGH);
      delay (1000);
       digitalWrite(LED2, LOW);
 
      delay (1000);

 
}
