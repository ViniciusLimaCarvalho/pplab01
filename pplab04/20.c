#include <stdio.h>

int eh_primo(int n) {
   if (n < 2) {
      return 0;
   }
   for (int i = 2; i <= n/2; i++) {
      if (n % i == 0) {
         return 0;
      }
   }
   return 1;
}

int contar_primos(int n) {
   int contador = 0;
   for (int i = 2; i < n; i++) {
      if (eh_primo(i)) {
         contador++;
      }
   }
   return contador;
}

int main() {
   int n;
   printf("Digite um número inteiro positivo: ");
   scanf("%d", &n);
   printf("Existem %d números primos abaixo de %d\n", contar_primos(n), n);
   return 0;
}
