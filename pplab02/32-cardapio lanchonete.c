#include <stdio.h>

int main() {
  int codigo, quantidade;
  float preco;

  printf("Digite o codigo do produto e a quantidade desejada\n");
  scanf("%d %d", &codigo, &quantidade);

  switch (codigo) {
    case 100:
      preco = 1.20;
      break;
    case 101:
      preco = 1.30;
      break;
    case 102:
      preco = 1.50;
      break;
    case 103:
      preco = 1.20;
      break;
    case 104:
      preco = 1.70;
      break;
    case 105:
      preco = 2.20;
      break;
    case 106:
      preco = 1.00;
      break;
    default:
      printf("Codigo de produto invalido!\n");
      return 1;
  }

  float valor_total = quantidade * preco;
  printf("O valor a ser pago eh R$%.2f\n", valor_total);

  return 0;
}
