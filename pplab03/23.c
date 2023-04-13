#include<stdio.h>

int main(){
  int coluna, linha, numero, valor = 1;
  
  printf("Digite o numero de linhas do Triangulo de Floyd: ");
  scanf("%d",&numero);
  
  if(numero > 0){
    for(linha = 1; linha <= numero; linha++){
      for(coluna = 1; coluna <= linha; coluna++){
        printf("%d ",valor);
        valor++;
      }
      printf("\n");
    }
  }

  return 0;
}