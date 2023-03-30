#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    float resultado;

    printf("digite um numero inteiro\n");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("numero invalido\n");
    } else {
        resultado = log(numero);
        printf("o logaritmo de %d eh: %f\n", numero, resultado);
    }

    return 0;
}
