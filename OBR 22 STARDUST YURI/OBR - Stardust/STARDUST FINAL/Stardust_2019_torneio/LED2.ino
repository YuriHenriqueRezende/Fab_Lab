  void LEDesq(){
      if (digitalRead (LED2 == LOW)) {     
        digitalWrite(LED2, HIGH); 
        delay(LEDtimer);
        } else {    
        digitalWrite(LED2, LOW);      
        }     
        //tempo que foi chamado   
        LEDtimer = millis();


  } 
