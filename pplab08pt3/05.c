#include<stdio.h>
#include<stdlib.h>

void separa(float num, int *inteiro, float *frac);

int main(){
    float num, frac, *p2;
    int inteiro, *p1;
    p1 = &inteiro;
    p2 = &frac;

    printf("Insira um numero real: ");
    scanf("%f",&num);

    separa(num, p1, p2);

    printf("Parte inteira: %d\n",inteiro);
    printf("Parte fracionaria: %f\n",frac);

    return 0;
}

void separa(float num, int *inteiro, float *frac){
    *inteiro = (int) num;
    *frac = num - *inteiro;
}