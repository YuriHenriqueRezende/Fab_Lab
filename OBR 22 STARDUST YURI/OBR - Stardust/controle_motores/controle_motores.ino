

//Inicio da rotina para o robô andar para frente
//se valor do sensor for maior que o valor de corte é branco então robô anda para frente
void avancar() {
  motor1.setSpeed(210); //Define a velocidade maxima
  motor1.run(FORWARD); //Gira o motor sentido PARA FRENTE
  motor2.setSpeed(210);
  motor2.run(FORWARD);
}
//fim da rotina avançar

//inicio da rotina de curvas do robô com sensores da linha
//se valor do sensor da linha esquerda for menor que o valor de corte = branco e se o valor do sensor da linha direita for maior que o valor de corte = preto
void curva_dir() {
  //nesse caso é necessário fazer uma curva a para a direita
  motor1.setSpeed(180); //Define a velocidade maxima
  motor1.run(FORWARD); //Gira o motor sentido PARA TRAS
  motor2.setSpeed(180);
  motor2.run(BACKWARD);
}

void curva_esq() {
  //se valor do sensor da linha esquerda for maior que o valor de corte = preto e se o valor do sensor da linha direita for menor que o valor de corte = branco
  //nesse caso é necessário fazer uma curva para a esquerda
  motor1.setSpeed(180); //Define a velocidade maxima
  motor1.run(BACKWARD); //Gira o motor sentido PARA FRENTE
  motor2.setSpeed(180);
  motor2.run(FORWARD);
}

//curvas 90º
void curva90dir() {
  //se os dois sensores da direita forem maior que o valor de corte = preto
  //nesse caso é necessário fazer uma curva a para a direita
  motor1.setSpeed(225); //Define a velocidade maxima
  motor1.run(FORWARD); //Gira o motor sentido PARA TRAS
  motor2.setSpeed(225);
  motor2.run(BACKWARD);
}

void curva90esq() {
  //se os dois sensores da esquerda forem maior que o valor de corte = preto
  //nesse caso é necessário fazer uma curva para a esquerda
  motor1.setSpeed(225); //Define a velocidade maxima
  motor1.run(BACKWARD); //Gira o motor sentido PARA FRENTE
  motor2.setSpeed(225);
  motor2.run(FORWARD);

}

void curvajustedir() {
  //se os dois sensores da direita forem maior que o valor de corte = preto
  //nesse caso é necessário fazer uma curva a para a direita
  motor1.setSpeed(200); //Define a velocidade maxima
  motor1.run(FORWARD); //Gira o motor sentido PARA TRAS
  motor2.setSpeed(190);
  motor2.run(BACKWARD);
}

void curvajustesq() {
  //se os dois sensores da esquerda forem maior que o valor de corte = preto
  //nesse caso é necessário fazer uma curva para a esquerda
  motor1.setSpeed(190); //Define a velocidade maxima
  motor1.run(BACKWARD); //Gira o motor sentido PARA FRENTE
  motor2.setSpeed(200);
  motor2.run(FORWARD);

}

//curvas 90º verde
void curvaverdedir() {
  //se os dois sensores da direita forem maior que o valor de corte = preto
  //nesse caso é necessário fazer uma curva a para a direita
  motor1.setSpeed(180); //Define a velocidade maxima
  motor1.run(BACKWARD); //Gira o motor sentido PARA TRAS
  motor2.setSpeed(140);
  motor2.run(FORWARD);
}

void curvaverdeesq() {
  //se os dois sensores da esquerda forem maior que o valor de corte = preto
  //nesse caso é necessário fazer uma curva para a esquerda
  motor1.setSpeed(150); //Define a velocidade maxima
  motor1.run(FORWARD); //Gira o motor sentido PARA FRENTE
  motor2.setSpeed(140);
  motor2.run(BACKWARD);

}


//fim da rotina de curvas do robô


//inicio da rotina de parar o robô
void parar() {
  //nesse caso é necessário parar o motor
  motor1.setSpeed(0); //Define a velocidade maxima
  motor1.run(RELEASE); //Para motor
  motor2.setSpeed(0);
  motor2.run(RELEASE);
}

//RAMPA
void rampa() {
  motor1.setSpeed(255); //Define a velocidade maxima
  motor1.run(FORWARD); //Gira o motor sentido PARA FRENTE
  motor2.setSpeed(255);
  motor2.run(FORWARD);
}

//inicio da rotina de ré
void re() {
  motor1.setSpeed(255); //Define a velocidade maxima
  motor1.run(BACKWARD); //Gira o motor sentido PARA FRENTE
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  }


