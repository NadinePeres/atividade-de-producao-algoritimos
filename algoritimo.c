#include <stdio.h>
#include <math.h>

/*
  Exibição de informações solicitadas para entrega da atividade
*/
void printDados(void) {
  printf("------------------------\n");
  printf("Olá!\n");
  printf("------------------------\n");
  printf("Aluna: Nadine Paula Peres\n");
  printf("Curso: Gestão de T.I\n");
  printf("Universidade: La Salle\n");
  printf("Matrícula: 201510632\n");
  printf("------------------------\n");
}

/*
  Exibição das opções de operações
*/
void printOperacoes(void) {
  printf("Indique a operação você deseja realizar: \n");
  printf("1 - Soma\n");
  printf("2 - Subtração\n");
  printf("3 - Multiplicação\n");
  printf("4 - Divisão\n");
  printf("5 - Potenciação\n");
  printf("6 - Raiz quadrada\n");
  printf("------------------------\n");
}

/*
  Operação de soma
*/
void soma(void) {
  printf("Você selecionou SOMA +\n");
  printf("Primeiro valor da soma:\n");
  float primeiroValor;
  scanf("%f", &primeiroValor);
  printf("Segundo valor da soma:\n");
  float segundoValor;
  scanf("%f", &segundoValor);
  printf("Resultado da soma: %f \n", primeiroValor + segundoValor);
}

/*
  Operação de subtração
*/
void subtracao(void) {
  printf("Você selecionou SUBTRAÇÃO -\n");
  printf("Informe o minuendo:\n");
  float minuendo;
  scanf("%f", &minuendo);
  printf("Informe o subtraendo:\n");
  float subtraendo;
  scanf("%f", &subtraendo);
  printf("Resultado da subtração é: %f \n", minuendo - subtraendo);
}

/*
  Operação de multiplicação
*/
void multiplicacao(void) {
  printf("Você selecionou MULTIPLICAÇÃO * \n");
  printf("Informe o primeiro fator:\n");
  float primeiroFator;
  scanf("%f", &primeiroFator);
  printf("Informe o segundo fator:\n");
  float segundoFator;
  scanf("%f", &segundoFator);
  printf("Resultado da multiplicação é: %f \n", primeiroFator * segundoFator);
}

/*
  Operação de divisão
*/
void divisao(void) {
  printf("Você selecionou DIVISÃO / \n");
  printf("Informe o dividendo: \n");
  float dividendo;
  scanf("%f", &dividendo);

  int getDivisor;
  getDivisor = 1;

  float divisor;
  while (getDivisor == 1) {
    printf("Informe o divisor: \n");
    scanf("%f", &divisor);
    if (divisor == 0) {
      printf("O divisor não pode ser 0 \n");
      continue;
    }
    getDivisor = 2;
  }
  printf("Resultado da divisão é: %f \n", dividendo / divisor);
}

/*
  Operação de potenciação
*/
void potenciacao(void) {
  printf("Você selecionou POTENCIAÇÃO ^ \n");
  printf("Informe a base:\n");
  float base;
  scanf("%f", &base);
  printf("Informe a potência:\n");
  float potencia;
  scanf("%f", &potencia);
  printf("Resultado da potenciação é: %f \n", (pow(base, potencia)));
}

/*
  Operação de raiz quadrada
*/
void raizQuadrada(void) {
  printf("Você selecionou RAIZ QUADRADA \n");
  printf("Informe o número:\n");
  float numero;
  scanf("%f", &numero);
  printf("Resultado da raiz quadrada de %f é %f \n", numero, sqrt(numero));
}

/*
  Execução da operação selecionada 
  baseada em uma estrutura de seleção simples 
  utilizando o switch case
*/
void executarOperacoes(int operacao) {
  switch (operacao) {
  case 1:
    soma();
    break;
  case 2:
    subtracao();
    break;
  case 3:
    multiplicacao();
    break;
  case 4:
    divisao();
    break;
  case 5:
    potenciacao();
    break;
  case 6:
    raizQuadrada();
    break;
  default:
    printf("Operação inválida!\n");
    break;
  }
  printf("------------------------\n");
}

/*
  Função principal do script
  que realiza operações matemáticas simples. 
  Onde inicialmente solicita a operação a ser
  realizada e após isso os devidos operadores
  e exibe o resultado
*/
int main(void) {
  /* 
    Visto que são somente dados 
    informativos para a entrega da atividade
    os mantive fora do loop para que 
    sejam exibidos somente durante a primeira execução
  */
  printDados();
  int continuar = 1;

  /* Loop de execução das operações */
  while (continuar == 1) {
    printOperacoes();
    int operacao;
    scanf("%i", &operacao);
    executarOperacoes(operacao);

    /*
      Confirmação para continuar ou parar a execução
      onde somente se digitado 1 o loop é executado novamente
    */
    printf("Você deseja realizar mais uma operação?\n");
    printf("Digite 1 para continuar:\n");
    scanf("%i", &continuar);
  }

  return 0;
}
