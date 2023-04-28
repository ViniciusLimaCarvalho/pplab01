#include<stdio.h>

int eh_primo(int num);

int main(){
   int vet[10], i, count;

   for(i = 0; i < 10; i++){
    printf("Insira o %do. numero: ",i + 1);
    scanf("%d",&vet[i]);
   }

   for(i = 0; i < 10; i++){
        if(eh_primo(vet[i]) == 1){
         printf("O numero %d, de posicao [%d] eh primo\n",vet[i],i+1);
         count ++;
    }
   }

   if(count == 0){
    printf("Nenhum numero primo");
   }

   return 0;
}

int eh_primo(int num)
{
  int i;
  int raiz;


  if((num == 0) || (num == 1)) {
    return 0;
  }
  if((num == 2) || (num == 3) || (num == 5) || (num == 7)) {
    return 1;
  }
  if(!(num % 2) || !(num % 3) || !(num % 5) || !(num % 7)) {
    return 0;
  }

  raiz = sqrt(num);
  for(i = 5; (i <= raiz); i += 6)
  {
    if(((num % i) == 0) || ((num % (i+2)) == 0)) {
      return 0;
    }
  }
  return 1;
}
