
    #include <AFMotor.h>
        
       
        
        //declarand1o os motores
        AF_DCMotor motor1(1); //Seleciona o motor 1
        AF_DCMotor motor2(2); //seleciona o motor 2
  void setup() {
       
  }
 
void loop() {

  
motor1.setSpeed(255); //Define a velocidade maxima
motor1.run(FORWARD); //Gira o motor sentido PARA FRENTE
motor2.setSpeed(255);
motor2.run(BACKWARD);
delay (3600);
  motor1.setSpeed(0); //Define a velocidade maxima
  motor1.run(RELEASE); //Para motor
  motor2.setSpeed(0);
  motor2.run(RELEASE);
delay (3000);

/*
//motor1.setSpeed(0);
//motor1.run(RELEASE); //Desliga o motor
//motor2.setSpeed(0);
//motor2.run(RELEASE); //Desliga o motor 

//CURVA PARA A DIREITA
motor1.setSpeed(200); //Define velocidade baixa
motor1.run(FORWARD); //Gira o motor sentido PARA TRÁS
motor2.setSpeed(200);
motor2.run(BACKWARD); 
delay(5000);

delay(1000);
//CURVA PARA A ESQUERDA
motor1.setSpeed(200); //Define velocidade baixa
motor1.run(BACKWARD); //Gira o motor sentido PARA TRÁS
motor2.setSpeed(200);
motor2.run(FORWARD); 
delay(5000);

//para tras
motor1.setSpeed(200); //Define a velocidade maxima
motor1.run(BACKWARD); //Gira o motor sentido PARA FRENTE
motor2.setSpeed(200);
motor2.run(FORWARD);
delay(1000);
*/
}


