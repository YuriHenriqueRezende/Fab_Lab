 void desviarDIREITA() {
      //DEPOIS DA LEITURA VERIFICA SE É MAIOR QUE 2 E MENOR QUE 4
               //Para robô por 100 milissegundos
                  parar();
                  delay(100);
                  
               //O robo efetua a ré por 400 milissegundos
                  re();
                  delay(400);
 
               //Move para a Esquerda por 2300 milissegundos
                 curva_dir();
                 delay(3000);
                
               //Move para frente por 1400 milissegundos
                 avancar();
                 delay(3400);
                  
               //Move para a Direita por 2400 milissegundos
                curva_esq();
                delay(2600);
          
               //Move para frente por 3400 milissegundos
                 avancar();
                delay(4400);
                
               //Move para a Direita por 2600 milissegundos
                curva_esq();
                delay(2600);
          
               //Move para frente por 1400 milissegundos
                 avancar();
                 delay(3000);
                   
               //Para robô por 2000 milissegundos
                curva_dir();
                delay(2000); 
          
              }
 
 
