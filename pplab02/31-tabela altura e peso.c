#include <stdio.h>

int main() {
  float altura, peso;

  printf("Digite a altura (em metros) e o peso (em quilogramas) da pessoa\n");
  scanf("%f %f", &altura, &peso);

  if (altura < 1.2) {
    if (peso <= 60) {
      printf("Classificacao: A\n");
    } else if (peso <= 90) {
      printf("Classificao: D\n");
    } else {
      printf("Classificacao: G\n");
    }
  } else if (altura <= 1.7) {
    if (peso <= 60) {
      printf("Classificacao: B\n");
    } else if (peso <= 90) {
      printf("Classificacao: E\n");
    } else {
      printf("Classificacao: H\n");
    }
  } else {
    if (peso <= 60) {
      printf("Classificacao: C\n");
    } else if (peso <= 90) {
      printf("Classificacao: F\n");
    } else {
      printf("Classificacao: I\n");
    }
  }

  return 0;
}
