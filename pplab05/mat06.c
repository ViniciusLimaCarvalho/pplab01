#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   int mat[4][4], i, j, max_valor = 20;

   srand(time(NULL));

   for(i = 0; i < 4; i++){
      for(j = 0; j < 4; j++){
         mat[i][j] = rand() % (max_valor + 1);
      }
   }

   for(i = 0; i < 4; i++){
      for(j = 0; j < 4; j++){
         printf("[%2d]",mat[i][j]);
      }
      printf("\n");
   }

   for(i = 0; i < 4; i++){
      for(j = 0; j < 4; j++){
         if(i < j){
            mat[i][j] = 0;
         }
      }
   }

   printf("\n\n");

   for(i = 0; i < 4; i++){
      for(j = 0; j < 4; j++){
         printf("[%2d]",mat[i][j]);
      }
      printf("\n");
   }

   return 0;
}
