#include <QTRSensors.h>

#include <AFMotor.h>     

        AF_DCMotor motor1(1); //Seleciona o motor 1
        AF_DCMotor motor2(2); //seleciona o motor 2

int Sensor1 = A0;
int Valor_Sensor1 = 0; 
int Sensor2 = A1; 
int Valor_Sensor2 = 0;
int Sensor3 = A2;
int Valor_Sensor3 = 0; 
int Sensor4 = A3;
int Valor_Sensor4 = 0;

int dirA;
int dirB;

void setup(){
  pinMode(dirA, OUTPUT);
  pinMode(dirB, OUTPUT);
  digitalWrite(dirA, HIGH); 
  digitalWrite(dirB, HIGH);
}

void loop(){
  Valor_Sensor1 = analogRead(Sensor1); 
  Valor_Sensor2 = analogRead(Sensor2); 
  Valor_Sensor3 = analogRead(Sensor3); 
  Valor_Sensor4 = analogRead(Sensor4);
  
  if((Valor_Sensor1 > 700) && (Valor_Sensor2 > 700)&&(Valor_Sensor3 > 700) && (Valor_Sensor4 > 700)){
    motor1.setSpeed(255); //Define a velocidade maxima
    motor1.run(FORWARD); //Gira o motor sentido PARA FRENTE
    motor2.setSpeed(255);
    motor2.run(FORWARD);
    delay (3600);
  }
  
  if((Valor_Sensor1 < 700) && (Valor_Sensor2 < 700)&&(Valor_Sensor3 > 700) && (Valor_Sensor4 > 700)){
    motor1.setSpeed(0); //Define a velocidade maxima
    motor1.run(BACKWARD); //Gira o motor sentido PARA FRENTE
    motor2.setSpeed(255);
    motor2.run(FORWARD);
    delay (3600);
  }
  
  if((Valor_Sensor1 > 700) && (Valor_Sensor2 > 700)&&(Valor_Sensor3 < 700) && (Valor_Sensor4 < 700)){
    motor1.setSpeed(255); //Define a velocidade maxima
    motor1.run(FORWARD); //Gira o motor sentido PARA FRENTE
    motor2.setSpeed(0);
    motor2.run(BACKWARD);
    delay (3600);
  }  
  
}
