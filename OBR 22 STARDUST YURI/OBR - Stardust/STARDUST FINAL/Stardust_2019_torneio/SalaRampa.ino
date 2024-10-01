 //================================================================================================================================
     //INICIO DA ROTINA DE RAMPA
    //================================================================================================================================
      void rampa() {
       //leitura do ultrasonic esquerda
              digitalWrite(trigPine, LOW);
              delayMicroseconds(2);
              digitalWrite(trigPine, HIGH);
              delayMicroseconds(10);
              digitalWrite(trigPine, LOW);
             
              distanciae = pulseIn(echoPine, HIGH, 5000);
              distanciae = distanciae/58.2;
              Serial.println(distanciae);

           //leitura do ultrasonic direita
              digitalWrite(trigPind, LOW);
              delayMicroseconds(2);
              digitalWrite(trigPind, HIGH);
              delayMicroseconds(10);
              digitalWrite(trigPind, LOW);
             
              distanciad = pulseIn(echoPind, HIGH, 5000);
              distanciad = distanciad/58.2;
              Serial.println(distanciad);      
  
     }
