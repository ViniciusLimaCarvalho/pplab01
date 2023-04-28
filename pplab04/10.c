#include<stdio.h>

float maior(float n1, float n2);

int main(){
  float numero1, numero2;
  
  printf("Insira o primeiro numero: ");
  scanf("%f",&numero1);

  printf("Insira o segundo numero: ");
  scanf("%f",&numero2);

  if(maior(numero1, numero2) != 0){
    printf("O numero maior eh %.2f",maior(numero1,numero2));
  }
  
  else{
    printf("Numeros iguais");
  }

  return 0;
}


float maior(float n1, float n2){
  if(n1 > n2){
    return n1;
  }
  else if(n2 > n1){
    return n2;
  }
  else{
    return 0;
  }
}