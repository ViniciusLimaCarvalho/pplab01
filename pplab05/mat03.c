#include<stdio.h>

int main(){
   int mat[4][4], i, j, maior;

   for(i = 0; i < 4; i++){
      for(j = 0; j < 4; j++){
         printf("Insira o elemento [%d][%d]: ",i+1,j+1);
         scanf("%d",&mat[i][j]);
      }
   }

   printf("\n");

   for(i = 0; i < 4; i++){
      for(j = 0; j < 4; j++){
         printf("[%4d]",mat[i][j]);
      }
      printf("\n");
   }

   maior = mat[0][0];

   for(i = 0; i < 4; i++){
      for(j = 0; j < 4; j++){
         if(mat[i][j] > maior){
            maior = mat[i][j];
         }
      }
   }
   
   printf("\n\n");

   for(i = 0; i < 4; i++){
      for(j = 0; j < 4; j++){
         if(mat[i][j] == maior){
            printf("O maior valor da matriz (%d) esta na linha %d na coluna %d\n",maior,i+1,j+1);
         }
      }
   }

   return 0;

}
