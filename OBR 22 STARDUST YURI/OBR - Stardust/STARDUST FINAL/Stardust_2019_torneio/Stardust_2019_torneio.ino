

        
           #include <AFMotor.h>
              
              
              //=============SEGUIDOR DE LINHA=================\\
              //===========PROGRAMAÇÃO POR STARDUST===========\\
            
          //declarar distância para o ultrasonico

          //sensor da frente
            #define echoPinf 19//Pino 19 recebe o pulso do echo
            #define trigPinf 20//Pino 20 recebe pulso do trig
            int distanciaf = 0;
            //sensor da direita
            #define echoPind 18//Pino 16 recebe o pulso do echo
            #define trigPind 17//Pino 17 recebe pulso do trig
            int distanciad = 0;
            //sensor da esquerda
            #define echoPine 16//Pino 14 recebe o pulso do echo
            #define trigPine 15//Pino 15 recebe pulso do trig
            int distanciae = 0;
                
              //declarand1o os motores
              AF_DCMotor motor1(1); //Seleciona o motor 1
              AF_DCMotor motor2(2); //seleciona o motor 2
              
              //declarando os sensores
       
       
         int OUT4 = 37; // sensor do da linha direita
         int OUT5 = 39; // sensor da ponta direita
         int OUT2 = 33; // sensor do linha esquerda
         int OUT1 = 31; // sensor da ponta esquerda
         int OUT3 = 35; // sensor do meio
              
              //declarando o LED
              int LED1 = 47;
              int LED2 = 46;
              const int LED = 250;
              unsigned long LEDtimer;

              //declarando os LDR
            const int ldrDir = A15; // LDR no pino analógico 0
            const int ldrEsq = A14; // LDR no pino analógico 0
            int ldrvalorDir = 0; // Valor lido do LDR
            int ldrvalorEsq = 0; // Valor lido do LDR
           

              /*
             //mercurio
             //RAMPA
            #define mercurio 17
            bool rampa = false;
              */
             
              //declarando o valor de corte da linha preta
              int VC = 1; //se for 1 é branco se for 0 é preto*/
              //declarando valorlinha
              int valorOUT1, valorOUT2, valorOUT3, valorOUT4, valorOUT5= 0;
              
     
              
              void setup() {
                Serial.begin(9600);
               pinMode(trigPinf, OUTPUT);
               pinMode(echoPinf, INPUT);
               pinMode(trigPind, OUTPUT);
               pinMode(echoPind, INPUT);
               pinMode(trigPine, OUTPUT);
               pinMode(echoPine, INPUT);
               pinMode(37, INPUT);
               pinMode(39, INPUT);
               pinMode(33, INPUT);
               pinMode(31, INPUT);
               pinMode(35, INPUT);
               pinMode(A15, OUTPUT);
               pinMode(A14, OUTPUT);
//               pinMode(mercurio, INPUT);
              }
              
              void loop() {
              
                //LEITURA DOS SENSORES
                sensores();
              //leitura do ultrasonic
              digitalWrite(trigPinf, LOW);
              delayMicroseconds(2);
              digitalWrite(trigPinf, HIGH);
              delayMicroseconds(10);
              digitalWrite(trigPinf, LOW);
             
              distanciaf = pulseIn(echoPinf, HIGH, 5000);
              distanciaf = distanciaf/58.2;
              Serial.println(distanciaf);
              sensores();
              
              //inicio desvia objeto
              // ESQUERDA
              if ((distanciaf > 2) && (distanciaf < 4)) {
               desviarESQUERDA();//chamar void para desviar objeto esquerda
               LEDesq();
               sensores();
              }
              /*//DIREITA
              if ((distanciaf > 2) && (distanciaf < 4)) {
               desviarDIREITA();//chamar void para desviar objeto direita
               LEDdir();
               sensores();
              }*/
              else{
              
    //================================================================================================================================
    //INICIO DO SEGUIR LINHA
    //================================================================================================================================  
            //inicia a rotina de segue linha da sala 1
             SegueLinha();
            // sensorverde();
          /* //se os sensores da lateral do robô encontrar objeto então é rampa
            if ((distanciad <= 5 )&& (distanciae <= 5 )) {
              rampa();
              sensores();
              LEDdir();
              LEDesq();
              }//fim ramppa*/
              } //fim segue linha
              }//fim do void loop
       
        
