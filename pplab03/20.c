#include <stdio.h>
#include<math.h>

int eh_primo(int num);

int main(){
    int numero, soma;
    for(numero = 1; numero < 2000000; numero ++){
        if(eh_primo(numero)){
            soma += numero;
        }
    }
    printf("a soma dos numeros primos de 1 a 2 milhoes eh %d",soma);
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