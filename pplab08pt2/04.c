#include<stdio.h>
#include<stdlib.h>

int main(){
    int vet[5], i, count = 0;
    int *p;

    p = vet;

    for(i = 0; i < 5; i++){
        printf("Insira o %do. valor: ",i+1);
        scanf("%d",p+i);
    }

    for(i = 0; i < 5; i++){
        if(*(p + i) % 2 == 0){
            count++;
            printf("Endereco do %do. numero par: %p\n",count,(p + i));
        }
    }

    return 0;
}
