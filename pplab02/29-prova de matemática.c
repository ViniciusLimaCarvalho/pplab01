#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int a, b, resposta, corretas = 0;

  for (int i = 0; i < 5; i++) {
    srand(time(NULL));
    a = rand() % 100 + 1;
    b = rand() % 100 + 1;

    printf("Qual eh a soma de %d + %d?\n", a, b);
    scanf("%d", &resposta);

    if (resposta == a + b) {
      printf("Resposta correta!\n");
      corretas++;
    } else {
      printf("Resposta incorreta. A resposta correta eh %d.\n", a + b);
    }
  }

  printf("Voce acertou %d de 5 perguntas.\n", corretas);

  return 0;
}
