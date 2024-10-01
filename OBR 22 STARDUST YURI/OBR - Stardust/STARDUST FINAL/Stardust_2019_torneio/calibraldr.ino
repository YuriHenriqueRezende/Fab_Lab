

    //================================================================================================================================
     //INICIO DA ROTINA CALIBRAR LDR
    //================================================================================================================================

   void sensorverde(){
   

ldrvalorDir = analogRead(ldrDir); // lê o valor do LDR da direita
ldrvalorEsq = analogRead(ldrEsq); // lê o valor do LDR da Esquerda


 //LDR DIREITA
  //Luminosidade baixa. 
  if ((ldrvalorDir > 400)&& (ldrvalorDir <800)) {
    //é verde robô tem que virar para o lado necessário
   LEDdir();
    delay(ldrvalorDir); // espera a quantidade de milissegundos em ldrValue
  }
   
  //Luminosidade alta.
  if (ldrvalorDir > 800) {
    // robô não leu verde, segue reto
    LEDdir();
    LEDesq();
  }
   
  //Exibindo o valor do sensor no serial monitor.
  Serial.println(ldrvalorDir);
  
  delay(50); 

 //LDR Esquerda
  //Luminosidade baixa. 
  if ((ldrvalorEsq < 100) && (ldrvalorEsq >= 30)) {
    //é verde robô tem que virar para o lado necessário
   LEDesq();
    delay(ldrvalorEsq); // espera a quantidade de milissegundos em ldrValue
  }
   
  //Luminosidade alta.
  if (ldrvalorEsq > 150) {
    // robô não leu verde, segue reto
   LEDesq();
   LEDdir();
   delay(ldrvalorEsq); // espera a quantidade de milissegundos em ldrValue 
  }
   
  //Exibindo o valor do sensor no serial monitor.
  Serial.println(ldrvalorEsq);
  
  delay(50); 
}
