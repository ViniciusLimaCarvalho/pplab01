#include<stdio.h>

int main()
{
    int val, soma, contagem;
    float media;
    soma = 0;
    contagem = 1;
    while(contagem <= 10){
        do{
            printf("insira o %do. numero\n",contagem);
            scanf("%d",&val);
        }while(val <= 0);
        soma = soma + val;
        contagem = contagem + 1;
    }
    media = soma / 10.0;
    printf("\na media eh %f",media);

    return 0;
}
