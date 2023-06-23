#include<stdio.h>

int main()
{
    int soma = 0, i;
    for(i = 1; i <= 1000; i++){
        if((i % 3 == 0) || (i % 5 == 0)){
            soma += i;
        }
    }
    printf("a soma dos numeros naturais menores que 1000 divisiveis por 3 ou 5 eh %d",soma);
    return 0;
}