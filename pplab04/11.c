#include<stdio.h>

float medias(float n1, float n2, float n3, char media);

int main(){
  float notas[3];
  char tipo_media;
  int i;

  for(i = 0; i < 3; i++){
    printf("Insira a %da. nota: ",i + 1);
    scanf("%f",&notas[i]);
  }

  printf("Insira o tipo de media ('P' para ponderada e 'A' para aritmetica): ");
  scanf(" %c",&tipo_media);

  if(tipo_media == 'P' || tipo_media == 'p'){
    printf("A media ponderada das notas eh %.1f",medias(notas[0],notas[1],notas[2],tipo_media));
  }
  else if(tipo_media == 'A' || tipo_media == 'a'){
    printf("A media aritmetica das notas eh %.1f",medias(notas[0],notas[1],notas[2],tipo_media));
  }
  else{
    printf("Erro: tipo de media invalido");
  }

  return 0;
}

float medias(float n1, float n2, float n3, char media){
  float aux;
  if((media == 'P') || (media == 'p')){
    aux = ((5 * n1) + (3 * n2) + (2 * n3)) / 10;  //o divisor eh a soma dos pesos estabelecidos, como na formula da media ponderada
  } 
  else if((media == 'A') || (media == 'a')){
    aux = (n1 + n2 + n3) / 3;
  }
  return aux;
}