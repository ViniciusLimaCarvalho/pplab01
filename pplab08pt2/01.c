#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    float vet[10];
    int i;

    srand(time(NULL));

    for(i = 0; i<10; i++){
        vet[i] = rand();
    }

    for(i = 0; i < 10; i++){
        printf("Endereco %d: %p\n",i+1,&vet[i]);
    }

    return 0;
}
