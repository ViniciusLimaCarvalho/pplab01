#include <stdio.h>

int main() {
    int num, soma = 0, digito;

    printf("insira um numero inteiro maior que zero\n");
    scanf("%d", &num);

    if (num <= 0) {
        printf("numero invalido\n");
        return 0;
    }

    while (num > 0) {
        digito = num % 10;    
        soma += digito;       
        num /= 10;            
    }

    printf("a soma dos algarismos eh %d\n", soma);

    return 0;
}