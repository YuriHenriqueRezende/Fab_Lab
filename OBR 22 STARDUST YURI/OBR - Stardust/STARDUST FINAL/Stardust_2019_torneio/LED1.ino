  
  void LEDdir(){
      if (digitalRead(LED1 == LOW)) {     
        digitalWrite(LED1, HIGH); 
        delay(LEDtimer);
        } else {    
        digitalWrite(LED1, LOW);      
        }     
        //tempo que foi chamado   
        LEDtimer = millis();


  } 
