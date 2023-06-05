#include<stdio.h>
#include<stdlib.h>

void troca(int *A, int *B){
    int aux;
    aux = *A;
    *A = *B;
    *B = aux;
}

int main(){
    int A, B, *p1, *p2;
    p1 = &A;
    p2 = &B;

    printf("Insira o numero A: ");
    scanf("%d",p1);

    printf("Insira o numero B: ");
    scanf("%d",p2);

    printf("\nANTES:\n");
    printf("A = %d\n",A);
    printf("B = %d\n",B);

    troca(p1,p2);

    printf("\nDEPOIS:\n");
    printf("A = %d\n",A);
    printf("B = %d\n",B);

    return 0;
}