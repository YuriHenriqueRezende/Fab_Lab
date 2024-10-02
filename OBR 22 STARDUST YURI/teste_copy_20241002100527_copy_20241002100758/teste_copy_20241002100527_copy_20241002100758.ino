// Variáveis para armazenar números e operação
float firstNumber, secondNumber, result;
char operation;

void setup() {
  // Inicia a comunicação serial a 9600 bps
  Serial.begin(9600);
  
  // Mensagens iniciais para o usuário
  Serial.println("Calculadora Serial");
  Serial.println("Digite o primeiro número:");
}

void loop() {
  // Verifica se há dados disponíveis no Monitor Serial
  if (Serial.available() > 0) {
    // Lê a entrada do usuário até o caractere de nova linha
    String input = Serial.readStringUntil('\n');
    
    // Se o primeiro número ainda não foi definido
    if (firstNumber == 0) {
      // Converte a entrada para float e armazena em firstNumber
      firstNumber = input.toFloat();
      Serial.println("Digite a operação (+, -, *, /):");
    } 
    // Se a operação ainda não foi definida
    else if (operation == 0) {
      // Armazena a operação escolhida
      operation = input.charAt(0);
      Serial.println("Digite o segundo número:");
    } 
    // Se já temos a operação e o segundo número
    else {
      // Converte a entrada para float e armazena em secondNumber
      secondNumber = input.toFloat();
      
      // Realiza a operação com base na escolha do usuário
      switch (operation) {
        case '+':
          result = firstNumber + secondNumber; // Adição
          break;
        case '-':
          result = firstNumber - secondNumber; // Subtração
          break;
        case '*':
          result = firstNumber * secondNumber; // Multiplicação
          break;
        case '/':
          // Verifica se o divisor é diferente de zero
          if (secondNumber != 0) {
            result = firstNumber / secondNumber; // Divisão
          } else {
            // Mensagem de erro para divisão por zero
            Serial.println("Erro: Divisão por zero!");
            resetCalculator(); // Reseta a calculadora
            return;
          }
          break;
        default:
          // Mensagem de erro para operação inválida
          Serial.println("Operação inválida!");
          resetCalculator(); // Reseta a calculadora
          return;
      }
      
      // Exibe o resultado no Monitor Serial
      Serial.print("Resultado: ");
      Serial.println(result);
      resetCalculator(); // Reseta a calculadora para nova operação
    }
  }
}

// Função para resetar as variáveis da calculadora
void resetCalculator() {
  firstNumber = 0; // Reseta o primeiro número
  secondNumber = 0; // Reseta o segundo número
  operation = 0; // Reseta a operação
  Serial.println("Digite o primeiro número:"); // Solicita novo número
}
