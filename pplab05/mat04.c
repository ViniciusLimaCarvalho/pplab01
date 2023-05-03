#include<stdio.h>

int main(){
   int mat[5][5], X, i, j, count = 0;

   for(i = 0; i < 5; i++){
      for(j = 0; j < 5; j++){
         printf("Insira o elemento [%d][%d] da matriz: ",i+1,j+1);
         scanf("%d",&mat[i][j]);
      }
   }

   printf("Insira o valor 'X' a ser achado na matriz: ");
   scanf("%d",&X);

   for(i = 0; i < 5; i++){
      for(j = 0; j < 5; j++){
         if(mat[i][j] == X){
            printf("Valor %d encontrado na linha %d coluna %d\n",X,i+1,j+1);
            count++;
         }
      }
   }

   if(count == 0){
      printf("Nao encontrado");
   }

   return 0;
}