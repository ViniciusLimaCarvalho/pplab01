#include<stdio.h>
#include<stdlib.h>

int main(){
    int vet[10];
    int i, *p, *min, *max;

    p = vet;

    min = vet;
    max = vet;

    for(i = 0; i < 10; i++){
        printf("Insira o %do. numero: ",i+1);
        scanf("%d",p+i);
    }

    for(i = 0; i < 10; i++){
        if(*(p+i) > *max){
            max = p + i;
        }
        if(*(p + i) < *min){
            min = p + i;
        }
    }

    printf("Menor numero: %d\n",*min);
    printf("Maior numero: %d\n",*max);

    return 0;
}