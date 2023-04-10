#include<stdio.h>

int main()
{
    int numero, i, menor, maior;
    printf("insira o 1o. numero\n");
    scanf("%d",&numero);
    menor = numero;
    maior = numero;
    for(i = 2; i <= 10; i++){
        printf("insira o %do. numero\n",i);
        scanf("%d",&numero);
        if(numero < menor){
            menor = numero;
        }
        if(numero > maior){
            maior = numero;
        }
    }
    printf("o menor valor eh %d\n",menor);
    printf("o maior valor eh %d\n",maior);
    return 0;
}