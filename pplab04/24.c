#include <stdio.h>

void triangulo(int n) {
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < 2*n-1; j++) {
         if (j >= n-i-1 && j <= n+i-1) {
            printf("*");
         } else {
            printf(" ");
         }
      }
      printf("\n");
   }
}

int main() {
   int n;
   printf("Digite um número inteiro positivo: ");
   scanf("%d", &n);
   triangulo(n);
   return 0;
}
