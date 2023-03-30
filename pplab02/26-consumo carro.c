#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    printf("Digite a distancia percorrida (em km)\n");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros de gasolina consumidos\n");
    scanf("%f", &litros);

    consumo = distancia / litros;

    printf("Consumo: %.2f Km/l\n", consumo);

    if (consumo < 8) {
        printf("Venda o carro!\n");
    } else if (consumo >= 8 && consumo <= 14) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }

    return 0;
}
