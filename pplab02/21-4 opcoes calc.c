#include <stdio.h>

int main() {
   int opcao;
   float num1, num2;
   do{
   printf("escolha a opcao\n");
   printf("(1) soma de 2 numeros\n");
   printf("(2) diferenca entre 2 numeros (maior pelo menor)\n");
   printf("(3) produto entre 2 numeros\n");
   printf("(4) divisao entre 2 numeros (o denominador nao pode ser zero)\n");
   scanf("%d", &opcao);
   }while((opcao < 1) || (opcao >4));
   
   switch (opcao) {
      case 1:
         printf("insira o primeiro valor\n");
         scanf("%f", &num1);
         printf("insira o segundo valor\n");
         scanf("%f",&num2);
         printf("resultado = %.2f\n", num1 + num2);
         break;
      case 2:
         printf("insira o primeiro valor\n");
         scanf("%f", &num1);
         printf("insira o segundo valor\n");
         scanf("%f",&num2);
         if (num1 > num2) {
            printf("resultado = %.2f\n", num1 - num2);
         }
         else {
            printf("resultado = %.2f\n", num2 - num1);
         }
         break;
      case 3:
         printf("insira o primeiro valor\n");
         scanf("%f", &num1);
         printf("insira o segundo valor\n");
         scanf("%f",&num2);
         printf("resultado = %.2f\n", num1 * num2);
         break;
      case 4:
         printf("insira o primeiro valor\n");
         scanf("%f", &num1);
         printf("insira o segundo valor\n");
         scanf("%f",&num2);
         if (num2 == 0) {
            printf("o denominador nao pode ser zero\n");
         }
         else {
            printf("resultado = %.2f\n", num1 / num2);
         }
         break;
   }

   return 0;
}
