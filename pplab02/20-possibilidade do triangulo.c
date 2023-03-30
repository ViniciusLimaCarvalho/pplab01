#include <stdio.h>

int main() {
   int a, b, c;
   
   printf("insira o primeiro valor\n");
   scanf("%d",&a);
   printf("insira o segundo valor\n");
   scanf("%d",&b);
   printf("insira o terceiro valor\n");
   scanf("%d",&c);

   if (a < b + c && b < a + c && c < a + b) {
      printf("os valores podem ser lados de um triangulo ");
      
      if (a == b && b == c) {
         printf("equilatero\n");
      }
      else if (a == b || b == c || a == c) {
         printf("isosceles\n");
      }
      else {
         printf("escaleno\n");
      }
   }
   else {
      printf("os valores nao podem ser lados de um triangulo\n");
   }

   return 0;
}
