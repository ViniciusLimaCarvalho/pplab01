#include <stdio.h>

void linhas_de_exclamacao(int n) {
   for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
         printf("!");
      }
      printf("\n");
   }
}

int main() {
   int n;
   printf("Digite um número inteiro positivo: ");
   scanf("%d", &n);
   linhas_de_exclamacao(n);
   return 0;
}
