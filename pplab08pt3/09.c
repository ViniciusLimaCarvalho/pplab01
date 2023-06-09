#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int vet[15], *p, i;

    p = vet;

    srand(time(NULL));

    for(i = 0; i < 15; i++){
        vet[i] = rand() % 100;
    }

    printf("ANTES:\n\n");

    for(i = 0; i < 15; i++){
        printf("%2d\n",vet[i]);
    }

    for(i = 0; i < 15; i++){
        *(p + i) += 1;
    }

    printf("\n\nDEPOIS:\n\n");

    for(i = 0; i < 15; i++){
        printf("%2d\n",vet[i]);
    }

    return 0;
}