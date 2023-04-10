#include<stdio.h>

int main()
{
    int numero, soma = 0, divisor, quociente;
    printf("insira um numero\n");
    scanf("%d",&numero);
    quociente = 1;
    while(quociente <= numero){
        divisor = numero / quociente;
        if(numero % quociente == 0){
            soma += divisor;
        }
        quociente += 1;
    }
    printf("a soma dos divisores desse numero eh %d",(soma - numero));

    return 0;
    }