#include<stdio.h>

int soma_algarismos(int num);

int main(){
  int numero;

  printf("Insira um numero de no maximo 3 algarismos: ");
  scanf("%d",&numero);

  if((numero <= 999) && (numero > 0)){
    printf("A soma dos algarismos eh %d",soma_algarismos(numero));
  }
  else{
    printf("Numero invalido");
  }

  return 0;
}

int soma_algarismos(int num){
  int aux;
  aux = (num / 100) + ((num / 10) - (10 * (num / 100))) + (num - (10 * (num / 10)));
  return aux;
}