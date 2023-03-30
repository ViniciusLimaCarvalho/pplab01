#include <stdio.h>

int main() {
   float valor, precoFinal;
   int estado;
   
   printf("Digite o valor do produto: R$ ");
   scanf("%f", &valor);
   
   do{
   printf("Digite o estado de destino do produto:\n");
   printf("1 - MG\n");
   printf("2 - SP\n");
   printf("3 - RJ\n");
   printf("4 - MS\n");
   scanf("%d", &estado);
   }while((estado < 1) || (estado >4));
   
   switch (estado) {
      case 1:
         precoFinal = valor * 1.07; // 7% de imposto em MG
         break;
      case 2:
         precoFinal = valor * 1.12; // 12% de imposto em SP
         break;
      case 3:
         precoFinal = valor * 1.15; // 15% de imposto no RJ
         break;
      case 4:
         precoFinal = valor * 1.08; // 8% de imposto em MS
         break;
      
   }
   
   printf("Preco final do produto: R$ %.2f\n", precoFinal);
   
   return 0;
}
