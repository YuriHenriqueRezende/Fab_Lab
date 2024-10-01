    
        #include <AFMotor.h>
            
                     
            
            //declarand1o os motores
            AF_DCMotor motor1(1); //Seleciona o motor esquerdo
            AF_DCMotor motor2(2); //seleciona o motor direito
      void setup() {
           
      }
     
    void loop() {
   
    //para frente  
    motor1.setSpeed(255); //Define a velocidade maxima
    motor1.run(FORWARD); //Gira o motor sentido para frente
    motor2.setSpeed(255);
    motor2.run(FORWARD);
    delay (5600);}
   /*
    //para trás
      motor1.setSpeed(255); //Define a velocidade maxima
      motor1.run(BACKWARD); //Gira motor para trás
      motor2.setSpeed(255);
      motor2.run(BACKWARD);
    delay (3000);
 
    //parar robô
    motor1.setSpeed(0);
    motor1.run(RELEASE); //Desliga o motor
    motor2.setSpeed(0);
    motor2.run(RELEASE); //Desliga o motor 
    delay(2000);
    
   
    //CURVA PARA A DIREITA
    motor1.setSpeed(255); //Define velocidade baixa
    motor1.run(FORWARD); //Gira o motor sentido para frente
    motor2.setSpeed(255);
    motor2.run(BACKWARD); //Gira o motor para trás
    delay(5000);
 
    //CURVA PARA A ESQUERDA
    motor1.setSpeed(200); //Define velocidade baixa
    motor1.run(BACKWARD); //Gira o motor sentido PARA TRÁS
    motor2.setSpeed(200);
    motor2.run(FORWARD); //Gira o motor sentido para frente
    delay(5000);
    } */
    
