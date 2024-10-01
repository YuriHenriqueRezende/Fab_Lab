    void desviarESQUERDA() {
    //DEPOIS DA LEITURA VERIFICA SE É MAIOR QUE 2 E MENOR QUE 4
               //Para robô por 100 milissegundos
                  parar();
                  delay(100);
                  
               //O robo efetua a ré por 400 milissegundos
                  re();
                  delay(400);
 
               //Move para a Esquerda por 2800 milissegundos
                 curva_esq();
                 delay(3200);
                
               //Move para frente por 1200 milissegundos
                 avancar();
                 delay(3800);
                  
               //Move para a Direita por 2600 milissegundos
                curva_dir();
                delay(2600);
          
               //Move para frente por 3600 milissegundos
                 avancar();
                delay(5000);
                
               //Move para a Direita por 2200 milissegundos
                curva_dir();
                delay(2500);
          
               //Move para frente por 1000 milissegundos
                 avancar();
                 delay(3200);
                   
               //Para robô por 2000 milissegundos
                curva_esq();
                delay(1600); 
          
              }
 
