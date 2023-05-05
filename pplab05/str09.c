#include <stdio.h>
#include <string.h>

int main() {
    char modelos[5][25];
    float consumo[5], menor, consumoMilKm;
    int i, idx_menor;

    // Leitura dos modelos e consumos
    for (i = 0; i < 5; i++) {
        printf("Insira o nome do carro: ");
        fgets(modelos[i], 25, stdin);
        modelos[i][strlen(modelos[i]) - 1] = '\0'; // removendo o \n do final da string lida

        printf("Insira o consumo do carro (em km/l): ");
        scanf("%f", &consumo[i]);
        getchar(); // consome o \n deixado pelo scanf para não interferir no fgets
    }

    // Encontra o carro mais econômico
    menor = consumo[0];
    idx_menor = 0;
    for (i = 1; i < 5; i++) {
        if (consumo[i] > 0 && consumo[i] < menor) { // evita consumo negativo e divide por zero
            menor = consumo[i];
            idx_menor = i;
        }
    }

    // Imprime o modelo do carro mais econômico
    printf("O modelo de carro mais economico dentre os 5 é: %s\n\n\n", modelos[idx_menor]);

    // Calcula o consumo de cada carro para percorrer 1000 km e imprime
    for (i = 0; i < 5; i++) {
        if (consumo[i] > 0) { // evita consumo negativo e divide por zero
            consumoMilKm = 1000.0 / consumo[i];
            printf("O consumo do carro %s para percorrer 1000 km eh: %.1f litros\n", modelos[i], consumoMilKm);
        }
    }

    return 0;
}
