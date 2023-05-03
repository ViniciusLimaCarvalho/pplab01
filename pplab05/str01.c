#include<stdio.h>
#include<stdlib.h>

int main(){
   char str[15];
   printf("Insira uma frase: ");
   fgets(str, 15, stdin);

   printf("A frase digitada foi: '%s'",str);

   return 0;
}