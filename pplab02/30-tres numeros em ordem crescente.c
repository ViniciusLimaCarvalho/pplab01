#include <stdio.h>

int main() {
  int a, b, c;

  printf("Digite tres numeros\n");
  scanf("%d %d %d", &a, &b, &c);

  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }
  if (b > c) {
    int temp = b;
    b = c;
    c = temp;
  }
  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }

  printf("Os numeros em ordem crescente sao %d %d %d\n", a, b, c);

  return 0;
}
