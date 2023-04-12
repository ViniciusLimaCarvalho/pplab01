#include <stdio.h>
#include<math.h>

int eh_primo(int num);

int main(){
    int numero, count, a, b;

    printf("Digite um numero 'a': ");
    scanf("%d",&a);

    printf("Digite um numero 'b': ");
    scanf("%d",&b);

    for(numero = a; numero < b; numero ++){
        if(eh_primo(numero)){
            count++ ;
        }
    }

    printf("a quantidade de numeros primos entre 'a' e 'b' eh %d",count);

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