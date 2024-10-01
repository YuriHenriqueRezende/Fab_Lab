 void SegueLinha() {


    
         int OUT4 = 37; // sensor do da linha direita
         int OUT5 = 39; // sensor da ponta direita
         int OUT2 = 33; // sensor do meio esquerda
         int OUT1 = 31; // sensor da ponta esquerda
         int OUT3 = 35; // sensor do meio
          
       


                //se valor dos quatro sensores for MAIOR que o valor de corte é branco então robô anda para frente
                //GAP
                  if ((valorOUT1 >= VC) && (valorOUT2 >= VC) && (valorOUT4 >= VC) && (valorOUT5 >= VC)&& (valorOUT3 < VC)) {  
                  avancar();
                  
                  } else {
                  //AQUI COMEÇA A FAZER CURVAS
                  //inicio da rotina com os sensores da linha
                  //se valor do sensor da linha esquerda for menor que o valor de corte = preto e se o valor do sensor da linha direita for maior que o valor de corte = branco
                  if ((valorOUT1 >= VC) && (valorOUT2 < VC) && (valorOUT4 >= VC) && (valorOUT5 >= VC)){
                    //nesse caso é necessário fazer uma curva a para esquerda
                    curva_esq();
                  }
                  //se valor do sensor da linha direita for maior que o valor de corte = preto e se o valor do sensor da linha direita for menor que o valor de corte = branco
                  if ((valorOUT1 >= VC) && (valorOUT2 >= VC) && (valorOUT4 < VC) && (valorOUT5 >= VC)){
                    //nesse caso é necessário fazer uma curva para a esquerda
                    curva_dir();
                  }

    //================================================================================================================================
    // //INICIO DA ROTINA CURVA DE 90º
    //================================================================================================================================

                       //se um sensor da esquerda < valor de corte = preto
                if ((valorOUT1 < VC) && (valorOUT2 < VC) && (valorOUT4 >= VC) && (valorOUT5 >= VC)){
                  parar();
                  LEDdir();
                  delay(200);
                  avancar();
                  delay(500);
                    //nesse caso é necessário fazer curva 90º para esquerd
                  while(valorOUT3 >= VC){
                    curva90dir(); 
                    sensores();   
                  }
                      }
                       //se um sensor da direita < valor de corte = preto
                   if ((valorOUT1 >= VC) && (valorOUT2 >= VC) && (valorOUT4 < VC) && (valorOUT5 < VC)){
                  parar();
                  LEDesq();
                  delay(200);
                  avancar();
                  delay(500);
                    //nesse caso é necessário fazer curva 90° para direita           
                 while(valorOUT3 >= VC) {
                    curva90esq();     
                      sensores();
                 }       
                     } 

    //================================================================================================================================
    //INICIO DA ROTINA DE ENCRUZILHADA
    //================================================================================================================================

                //se todos os sensores encontra o valor < que o de corte = preto
                if((OUT1 < VC) &&(OUT2 < VC) && (OUT4 < VC) && (OUT5 < VC)) {  
                  //nesse caso é encruzilhada verificar se tem que seguir reto ou virar para algum lado
                  re();
                  delay(3000);
                  //verifica se possui verde do lado direito
                  if ((ldrDir > 400) &&  (ldrDir < 800)) {
                  avancar();
                  delay(1000);
                  parar();
                  delay(500);
                  do{
                  curva90dir();
                   }while(valorOUT2 >= VC);
                 sensores();
                 LEDdir();                   
                     }
                //verifica se possui verde do lado esquerdo  
                if ((ldrEsq < 100) && (ldrEsq >= 30)) {
                  avancar();
                  delay(1000);
                  parar();
                  delay(500);
                  do{
                  curva90esq();
                  }while(valorOUT4 >= VC);
                  sensores();
                  LEDesq();                   
                     }
                  avancar();       
                  }//fim da rotina encruzilhada
      
         
           //================================================================================================================================
            // //INICIO DA ROTINA CURVA DE 90º detectando o verde
            //================================================================================================================================
  
                  //se um sensor da esquerda > valor de corte = preto
                  if ((valorOUT1 < VC) && (valorOUT2 < VC) && (valorOUT4 >= VC) && (valorOUT5 >= VC)){
                      //nesse caso é necessário fazer curva 90º para esquerda
                    //verifica se possui verde do lado esquerdo  
                  if ((ldrDir > 400) &&  (ldrDir < 800)) {
                    avancar();
                    delay(1000);
                    parar();
                    delay(500);
                    do{
                    curva90dir();
                     }while(valorOUT3 >= VC);
                   sensores();
                   LEDdir();                   
                       }
                  }//fim da rotina verde esquerda
                     //se um sensor da direita > valor de corte = preto
                     if ((valorOUT1 >= VC) && (valorOUT2 >= VC) && (valorOUT4 < VC) && (valorOUT5 < VC)){
                      //nesse caso é necessário fazer curva 90° para direita
                     //verifica se possui verde do lado direito
                    if ((ldrEsq < 100) && (ldrEsq >= 30)) {
                    avancar();
                    delay(1000);
                    parar();
                    delay(1000);
                    do{
                    curva90esq();
                     }while(valorOUT3 >= VC);
                   sensores();
                   LEDesq();                   
                       }
                     }//fim da rotina verde

             }//fim-else               
}//fim-void
