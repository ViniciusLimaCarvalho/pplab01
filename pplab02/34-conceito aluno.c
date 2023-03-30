#include <stdio.h>

int main() {
  float nota;
  int faltas;
  char conceito;

  printf("Digite a nota do aluno\n");
  scanf("%f", &nota);

  printf("Digite o numero de faltas do aluno\n");
  scanf("%d", &faltas);

  if (faltas > 20) {
    if (nota >= 9.0) {
      conceito = 'B';
    } else if (nota >= 7.5) {
      conceito = 'C';
    } else if (nota >= 5.0) {
      conceito = 'D';
    } else if (nota >= 4.0) {
      conceito = 'E';
    } else {
      conceito = 'E';
    }
  } else {
    if (nota >= 9.0) {
      conceito = 'A';
    } else if (nota >= 7.5) {
      conceito = 'B';
    } else if (nota >= 5.0) {
      conceito = 'C';
    } else if (nota >= 4.0) {
      conceito = 'D';
    } else {
      conceito = 'E';
    }
  }

  printf("O conceito do aluno eh %c\n", conceito);

  return 0;
}
