#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("_*DOBRO DE 5 VALORES*_\n\n");

    int vet[5], i;
    int *p;

    p = vet;

    for(i = 0; i < 5; i++){
        printf("Insira o %do. numero inteiro: ",i+1);
        scanf("%d",vet +i);
    }

    for(i = 0; i < 5; i++){
        *(p + i) *= 2;
    }

    for(i = 0; i < 5; i++){
        printf("Valor %d: %d\n",i+1,*(p+i));
    }

    return 0;
}

