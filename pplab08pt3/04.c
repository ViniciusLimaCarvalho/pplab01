#include<stdio.h>
#include<stdlib.h>

void troca(int *A, int *B);

void ordena(int *A, int *B, int *C);

int main(){
    int A, B, C, *p1, *p2, *p3;
    p1 = &A;
    p2 = &B;
    p3 = &C;

    printf("Insira o numero A: ");
    scanf("%d",p1);

    printf("Insira o numero B: ");
    scanf("%d",p2);

    printf("Insira o numero C: ");
    scanf("%d",p3);

    printf("\nANTES:\n");
    printf("A = %d\n",A);
    printf("B = %d\n",B);
    printf("C = %d\n",C);

    ordena(p1,p2,p3);

    printf("\nDEPOIS:\n");
    printf("A = %d\n",A);
    printf("B = %d\n",B);
    printf("C = %d\n",C);

    return 0;
}

void troca(int *A, int *B){
    int aux;
    aux = *A;
    *A = *B;
    *B = aux;
}

void ordena(int *A, int *B, int *C){
    if(*A > *B){
        troca(A,B);
    }
    if(*B > *C){
        troca(B,C);
    }
    if(*A > *B){
        troca(A,B);
    }
}