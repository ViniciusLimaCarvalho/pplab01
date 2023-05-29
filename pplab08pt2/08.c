#include<stdio.h>
#include<stdlib.h>

int main(){
    int A, *B, **C, ***D;

    B = &A;
    C = &B;
    D = &C;

    printf("Insira um numero: ");
    scanf("%d",&A);

    *B *= 2;
    printf("Dobro: %d\n",*B);

    **C *= 1.5;
    printf("Triplo: %d\n",**C);

    ***D = ***D * 4 / 3;
    printf("Quadruplo: %d\n",***D);

    return 0;
}