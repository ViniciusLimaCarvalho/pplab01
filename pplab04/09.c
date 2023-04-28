#include<stdio.h>
#include<math.h>
#define PI 3.141592

float vCilindroCircular (float altura, float raio);

int main(){
  float rCilindro, hCilindro;

  printf("Insira o raio do Cilindro Circular Reto: ");
  scanf("%f",&rCilindro);

  printf("Insira a altura do Cilindro Circular Reto: ");
  scanf("%f",&hCilindro);

  printf("O volume do Cilindro Circular Reto eh %.1f",vCilindroCircular(rCilindro, hCilindro));

  return 0;
}

float vCilindroCircular (float altura, float raio){
  float aux;
  aux = PI * pow(raio,2) * altura;
  return aux;
}
