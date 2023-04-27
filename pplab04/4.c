#include<stdio.h>
#include<math.h>

int quadrado_perfeito(int num);

int main(){
  int numero;
  
  printf("Insira um numero real: ");
  scanf("%d",&numero);

  if(quadrado_perfeito(numero) == 1){
    printf("O numero %d eh um quadrado perfeito",numero);
  }
  else{
    printf("O numero %d nao eh um quadrado perfeito",numero);
  }

  return 0;
}

int quadrado_perfeito(int num){
  float raiz;
  raiz = sqrt(num);
  if(raiz == (int)raiz){
    return 1;
  }
  else{
    return 0;
  }
}