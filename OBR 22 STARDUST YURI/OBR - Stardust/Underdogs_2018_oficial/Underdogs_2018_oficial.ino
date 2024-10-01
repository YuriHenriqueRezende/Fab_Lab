  
  
  
          #include <AFMotor.h>
          
          
          //=============SEGUIDOR DE LINHA=================\\
          //===========PROGRAMAÇÃO POR UNDERDOGS===========\\
          
      //declarar distância para o ultrasonico
            #define trig 31
            #define echo 33
             int distancia = 0;
    
          
          //declarand1o os motores
          AF_DCMotor motor1(1); //Seleciona o motor 1
          AF_DCMotor motor2(2); //seleciona o motor 2
          
          //declarando os sensores
          int sensorEsq = A8;
          int sensorLinhaDir = A9;
          int sensorLinhaEsq = A10;
          int sensorDir = A11;
          
          //declarando o LED
          int LED = 43;
          
          //DECLARANDO OS LDR
          int verdeEsq = analogRead(A13);
          int verdeDir = analogRead(A12);
          
          //declarando o valor de corte da linha preta
          int VC = 350;
          
          
          //declarando valorlinha
          int   valorLinhaEsq, valorLinhaDir, valorDir, valorEsq = 0;
          
          //Velocidade do Motor
          int speed = 180; //Este valor pode variar de 0-255
          
          void setup() {
            Serial.begin(9600);
            pinMode(trig, OUTPUT);
            pinMode(echo, INPUT);
            pinMode(A8, INPUT);
            pinMode(A9, INPUT);
            pinMode(A10, INPUT);
            pinMode(A11, INPUT);
            //pinMode(A12, INPUT);
            //pinMode(A13, INPUT);
          }
          
          void loop() {
          
            //LEITURA DOS SENSORES
            valorLinhaEsq = analogRead(sensorLinhaEsq); //valor do sensor para seguir linha
            valorLinhaDir = analogRead(sensorLinhaDir); //valor do sensor para seguir linha
            valorEsq = analogRead(sensorEsq); //valor do sensor para seguir linha
            valorDir = analogRead(sensorDir); //valor do sensor para seguir linha
   
    
          //leitura do ultrasonic
          digitalWrite(trig, LOW);
          delayMicroseconds(2);
          digitalWrite(trig, HIGH);
          delayMicroseconds(10);
          digitalWrite(trig, LOW);
         
          distancia = pulseIn(echo, HIGH, 5000);
          distancia = distancia/58.2;
          Serial.println(distancia);
  
          //inicio desvia objeto
          if ((distancia >=5) && (distancia <= 10)) {
            digitalWrite(LED, HIGH);
            delay(1000);
            desviar();
            digitalWrite(LED, LOW);
          }
  
        else{
            //INICIO DO SEGUIR LINHA
            //se valor dos quatro sensores for MAIOR que o valor de corte é branco então robô anda para frente
            //GAP
              if ((valorLinhaEsq > VC) && (valorLinhaDir > VC) && (valorEsq > VC) && (valorDir > VC)) {
              avancar();
            } else {
           
          
              //AQUI COMEÇA A FAZER CURVAS
              //inicio da rotina com os sensores da linha
              //se valor do sensor da linha esquerda for maior que o valor de corte = branco e se o valor do sensor da linha direita for menor que o valor de corte = preto
              if ((valorLinhaEsq > VC) && (valorLinhaDir < VC) && (valorEsq > VC) && (valorDir > VC)) {
                //nesse caso é necessário fazer uma curva a para direita
                curva_dir();
              }
              //se valor do sensor da linha esquerda for menor que o valor de corte = preto e se o valor do sensor da linha direita for maior que o valor de corte = branco
              if ((valorLinhaEsq < VC) && (valorLinhaDir > VC) && (valorEsq > VC) && (valorDir > VC)) {
                //nesse caso é necessário fazer uma curva para a esquerda
                curva_esq();
              }
             
              //FIM DA ROTINA COM OS DOIS SENSORES DO MEIO
          
              //INICIO DA ROTINA CURVA DE 90º
              //se os dois sensores da esquerda > valor de corte = preto
          
              if ((valorLinhaEsq < VC) && (valorLinhaDir > VC) && (valorEsq < VC) && (valorDir > VC)){   
                 //nesse caso é necessário curva de 90º para a esquerda
               digitalWrite(LED, HIGH);
               delay(1000);  
               avancar();
                delay(500);
                parar();
                delay(1200); 
               curva90esq();
               delay(1900);
               if (valorDir > VC) {
                cuvaajustedir();
               }
               digitalWrite(LED, LOW);
                }
          
          
              //se os dois sensores da direita > valor de corte = preto
              if ((valorLinhaEsq > VC) && (valorLinhaDir < VC) && (valorEsq > VC) && (valorDir < VC)) {
                //nesse caso é necessário fazer uma curva de 90º para a direita
               digitalWrite(LED, HIGH);
               delay(1000);  
               avancar();
                delay(500);
                parar();
                delay(1200); 
               curva90dir();
               delay(2600);
               if (valorEsq > VC) {
                cuvaajustesq();
               }
               digitalWrite(LED, LOW);
                }
                
            if ((valorLinhaEsq < VC) && (valorLinhaDir < VC)) {
               avancar();
                delay(400);
            }
                
              //FIM DAS CURVAS DE 90º
              //INICIO DA ROTINA Sensores ponta
          
                //se o sensor da ponta esquerda e os 2 sensores da linha encontrar valor maior que valor de corte = preto
                if ((valorEsq < VC)) {
                  //nesse caso é necessário fazer uma curva para a esquerda
                   curvajustesq();
                  }
            
                //se o sensor da ponta direita e os 2 sensores da linha encontrar valor maior que valor de corte = preto
                if ((valorDir < VC)) {
                  //nesse caso é necessário fazer uma curva  para a direita
                     curvajustedir();
                  } 
  
              
          
              //FIM DA ROTINA COM SENSORES DA PONTA
              
              //INICIO DA ROTINA DA ENCRUZILHADA
              //Se o valor dos 4 sensores for maior que o valor do corte = preto
              if ((valorEsq > VC) && (valorDir > VC) && (valorLinhaDir > VC) && (valorLinhaEsq > VC)) {
                //encruzilhada
                parar();
                avancar();
                delay(500);
  
                if (verdeEsq > 250 && verdeEsq < 350 ) {
                  digitalWrite(LED, HIGH);
                  delay(1000); 
                  curva90esq();
                  delay(200);
                }
                if (verdeDir > 250 && verdeDir < 350) { 
                  digitalWrite(LED, HIGH);
                   delay(1000); 
                  curva90dir();
                  delay(200);
                }
                avancar();
              }//fim-if
          
          
            //FIM DA ROTINA ENCRUZILHADa
  
    
            
         
            } //fim segue linha
          } //fim desvia objeto
          
          }//fim do void loop
