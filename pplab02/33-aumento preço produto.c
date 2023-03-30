#include <stdio.h>

int main() {
  float preco_antigo, preco_novo;
  printf("Digite o preco antigo do produto\n");
  scanf("%f", &preco_antigo);

  if (preco_antigo <= 50) {
    preco_novo = preco_antigo * 1.05;
  } else if (preco_antigo <= 100) {
    preco_novo = preco_antigo * 1.10;
  } else {
    preco_novo = preco_antigo * 1.15;
  }

  printf("O preco novo do produto eh R$%.2f\n", preco_novo);

  if (preco_novo <= 80) {
    printf("Barato\n");
  } else if (preco_novo <= 120) {
    printf("Normal\n");
  } else if (preco_novo <= 200) {
    printf("Caro\n");
  } else {
    printf("Muito caro\n");
  }

  return 0;
}
