#include<stdio.h>

int main(){
    int A[6], soma, i;

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    soma = A[0] + A[1] + A[5];
    printf("A soma dos numeros de A[0], A[1] e A[5] eh %d\n\n",soma);

    A[4] = 100;

    for(i = 0; i < 6; i++){
        printf("O valor do vetor A[%d] eh %d\n",i, A[i]);
    }

    return 0;
}
