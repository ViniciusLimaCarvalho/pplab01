#include<stdio.h>
#include<stdlib.h>

int main(){
    int vet[10];
    int i, *p, num;

    p = vet;

    printf("Insira um numero inteiro: ");
    scanf("%d",&num);

    for(i = 0; i < 10; i++){
        *(p + i) = num;
    }

    for(i = 0; i < 10; i++){
        printf("%d\n",*(p + i));
    }

    return 0;
}