#include<stdio.h>
#include<stdlib.h>

void leNotas(float *n1, float *n2);

void mediaPonderada(float n1, float n2, float *media);

int main(){
    float n1, n2, media;
    
    leNotas(&n1, &n2);
    
    mediaPonderada(n1, n2, &media);
    
    printf("N1 = %.1f\n",n1);
    printf("N2 = %.1f\n",n2);
    printf("Media Ponderada = %.2f",media);
    
}

void leNotas(float *n1, float *n2){
    printf("Insira a primeira nota: ");
    scanf("%f",n1);
    
    printf("\nInsira a segunda nota: ");
    scanf("%f",n2);
}

void mediaPonderada(float n1, float n2, float *media){
    *media = (n1 + 2.0 * n2) / 3.0;
}