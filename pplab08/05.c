#include<stdio.h>

int main(){
    int A, B, *A1, *B1;
    A1 = &A;
    B1 = &B;

    printf("Insira um numero inteiro: ");
    scanf("%d",A1);

    printf("Insira outro numero inteiro: ");
    scanf("%d",B1);

    *A1 *= 2;
    *B1 *= 2;

    printf("Soma = %d",*A1 + *B1);
    return 0;
}
