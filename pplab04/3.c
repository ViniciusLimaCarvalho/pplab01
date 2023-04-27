#include<stdio.h>

int eh_positivo(int num);

int main(){
  float numero;

  printf("Insira um numero real: ");
  scanf("%f",&numero);
  
  if(eh_positivo(numero) == -1){
    printf("O numero eh negativo");
  }
  else if(eh_positivo(numero) == 1){
    printf("O numero eh positivo");
  }
  else{
    printf("O numero eh 0");
  }

  return 0;
}

int eh_positivo(int num){
  if(num < 0){
    return (-1);
  }
  else if(num > 0){
    return 1;
  }
  else{
    return 0;
  }
}