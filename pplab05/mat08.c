#include<stdio.h>

int main(){
   int mat1[2][2], mat2[2][2], matR[2][2], i, j, constante;
   char opcao;

   for(i = 0; i < 2; i++){
      for(j = 0; j < 2; j++){
         printf("Insira o elemento [%d][%d] da primeira matriz: ",i+1,j+1);
         scanf("%d",&mat1[i][j]);
      }
   }

   printf("\n");

   for(i = 0; i < 2; i++){
      for(j = 0; j < 2; j++){
         printf("Insira o elemento [%d][%d] da segunda matriz: ",i+1,j+1);
         scanf("%d",&mat2[i][j]);
      }
   }

   do{
   printf("\nQual operacao deseja realizar ?\n");
   printf("a)somar as matrizes\n");
   printf("b)subtrair a primeira matriz da segunda\n");
   printf("c)adicionar uma constante as duas matrizes\n");
   printf("d)imprimir as matrizes\n");
   scanf(" %c",&opcao);
   }while((opcao < 'a') || (opcao > 'd'));

   if(opcao == 'a'){
      for(i = 0; i < 2; i++){
         for(j = 0; j < 2; j++){
            matR[i][j] = mat1[i][j] + mat2[i][j];
         }
      }

      printf("O resultado eh:\n");

      for(i = 0; i < 2; i++){
         for(j = 0; j < 2; j++){
            printf("[%4d]",matR[i][j]);
         }
         printf("\n");
      }
   } 

   else if(opcao == 'b'){
      for(i = 0; i < 2; i++){
         for(j = 0; j < 2; j++){
            matR[i][j] = mat2[i][j] - mat1[i][j];
         }
      }

      printf("O resultado eh:\n");

      for(i = 0; i < 2; i ++){
         for(j = 0; j < 2 ; j++){
            printf("[%4d]",matR[i][j]);
         }
         printf("\n");
      }
   }

   else if(opcao == 'c'){
      printf("Insira a constante a ser atribuida: ");
      scanf("%d",&constante);

      for(i = 0; i < 2; i++){
         for(j = 0; j < 2; j++){
            matR[i][j] = mat1[i][j] + constante;
         }
      }

      printf("Primeira matriz:\n");

      for(i = 0; i < 2; i++){
         for(j = 0; j < 2; j++){
            printf("[%4d]",matR[i][j]);
         }
         printf("\n");
      }

      printf("\n\n");

      for(i = 0; i < 2; i++){
         for(j = 0; j < 2; j++){
            matR[i][j] = mat2[i][j] + constante;
         }
      }

      printf("Segunda matriz:\n");

      for(i = 0; i < 2; i++){
         for(j = 0; j < 2; j++){
            printf("[%4d]",matR[i][j]);
         }
         printf("\n");
      }
   }

   else{

      printf("Primeira matriz:\n");

      for(i = 0; i < 2; i++){
         for(j = 0; j < 2; j++){
            printf("[%4d]",mat1[i][j]);
         }
         printf("\n");
      }

      printf("\n\n");

      printf("Segunda matriz:\n");

      for(i = 0; i < 2; i++){
         for(j = 0; j < 2; j++){
            printf("[%4d]",mat2[i][j]);
         }
         printf("\n");
      }
   }

   return 0;
}