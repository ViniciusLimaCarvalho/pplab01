#include<stdio.h>
#include<math.h>

int main(){
   int mat[10][10], i, j;

   for(i = 0; i < 10; i++){
      for(j = 0; j < 10; j++){
         if(i < j){
            mat[i][j] = (2 * i) + (7 * j);
         }
         else if(i == j){
            mat[i][j] = pow((3 * i),2) - 1;
         }
         else{
            mat[i][j] = (4 * pow(i,3)) - ((5 * pow(j,2)));
         }
      }
   }

   for(i = 0; i < 10; i++){
      for(j = 0; j < 10; j++){
         printf("[%4d]",mat[i][j]);
      }
      printf("\n");
   }

   return 0;
}