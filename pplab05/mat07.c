#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   int mat[5][5], i, j, l, c;

   srand(time(NULL));

   for(i = 0; i < 5; i++){
      for(j = 0; j < 5; j++){
         geracao:
         mat[i][j] = rand() % 100;
         for(l = 0; l < 5; l++){
            for(c = 0; c < 5; c++){
               if((l != i) || (c != j)){
                  if(mat[i][j] == mat[l][c]){
                  goto geracao;
                  }
               }
            }
         }
      }
   }

   for(i = 0; i < 5; i++){
      for(j = 0; j < 5; j++){
         printf("[%2d]",mat[i][j]);
      }
      printf("\n");
   }

   return 0;
}