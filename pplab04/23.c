#include <stdio.h>

void triangulo_lateral(int n) {
   for (int i = 1; i <= 2*n-1; i++) {
      if (i <= n) {
         for (int j = 1; j <= i; j++) {
            printf("*");
         }
      } else {
         for (int j = 1; j <= 2*n-i; j++) {
            printf("*");
         }
      }
      printf("\n");
   }
}

int main() {
   int n;
   printf("Digite um número inteiro positivo: ");
   scanf("%d", &n);
   triangulo_lateral(n);
   return 0;
}
