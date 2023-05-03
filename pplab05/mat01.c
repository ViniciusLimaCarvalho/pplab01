#include<stdio.h>

int main(){
   int count = 0, i, j, mat[4][4];

   for(i = 0; i < 4; i++){
      for(j = 0; j < 4; j++){
         printf("Insira o elemento [%d][%d]: ",i+1,j+1);
         scanf("%d",&mat[i][j]);
      }
   }

   printf("Os elementos com valor maior que 10 sao: \n");

   for(i = 0; i < 4; i++){
      for(j = 0; j < 4; j ++){
         if(mat[i][j] > 10){
            printf("mat[%d][%d] = %d\n",i+1,j+1,mat[i][j]);
            count++;        
         }
      }
   }

   printf("Sao %d numeros maiores que 10",count);

   return 0;
}