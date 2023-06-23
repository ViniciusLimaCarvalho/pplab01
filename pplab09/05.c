#include<stdio.h>

int main()
{
    int val, soma, contagem;
    soma = 0;
    contagem = 1;
    while(contagem <= 10){
        printf("insira o %do. numero\n",contagem);
        scanf("%d",&val);
        soma = soma + val;
        contagem = contagem + 1;
    }
    printf("\no resultado da soma eh %d",soma);

    return 0;
}
