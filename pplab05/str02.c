#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
   char str[50], i, count = 0;

   printf("Insira uma sequencia de numeros: ");
   fgets(str,50,stdin);

   for(i = 0; i < strlen(str); i++){
      if(str[i] == '1'){
         count++;
      }
   }

   printf("O numero de vezes que aparece o numero '1' na sequencia eh %d",count);

   return 0;
}