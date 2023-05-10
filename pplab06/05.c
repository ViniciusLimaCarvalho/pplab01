#include<stdio.h>

struct vetor{
    float a;
    float b;
    float c;
};


int main(){
    struct vetor v[2];
    struct vetor soma;
    int i;

    for(i = 0; i < 2; i++){
        printf("Insira a coordenada 'a' do %do. vetor: ",i + 1);
        scanf("%f",&v[i].a);

        printf("Insira a coordenada 'b' do %do. vetor: ",i + 1);
        scanf("%f",&v[i].b);

        printf("Insira a coordenada 'c' do %do. vetor: ",i + 1);
        scanf("%f",&v[i].c);

    }

    soma.a = v[0].a + v[1].a;
    soma.b = v[0].b + v[1].b;
    soma.c = v[0].c + v[1].c;

    printf("O vetor resultante dessa soma tem coordenadas (%.1f,%.1f,%.1f)",soma.a,soma.b,soma.c);

    return 0;
}