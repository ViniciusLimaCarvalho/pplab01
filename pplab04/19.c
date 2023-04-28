#include <stdio.h>

int fatorial(int n) {
   if (n == 0) {
      return 1;
   } else {
      return n * fatorial(n-1);
   }
}

int main() {
   int n;
   printf("Digite um número inteiro positivo: ");
   scanf("%d", &n);
   printf("%d! = %d\n", n, fatorial(n));
   return 0;
}
