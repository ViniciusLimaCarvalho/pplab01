#include<stdio.h>

int main(){
  int i, j, maior_palindromo = 0, produto;
  
  for(i = 100; i <= 999; i++){
    for(j = 100; j <= 999; j++){
      produto = i * j;
      int inverso = 0, aux = produto;
      while(aux != 0){
        inverso = inverso * 10 + aux % 10;
        aux /= 10;
      }
      if(produto == inverso && produto > maior_palindromo){
        maior_palindromo = produto;
      }
    }
  }
  printf("O maior palindromo feito a partir do produto de 3 numeros eh %d",maior_palindromo);
  
  return 0;
}