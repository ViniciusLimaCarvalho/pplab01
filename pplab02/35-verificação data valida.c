#include <stdio.h>

int main() {
    int dia, mes, ano, bissexto;

    printf("Digite uma data no formato DD/MM/AAAA\n");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        bissexto = 1;
    } else {
        bissexto = 0;
    }

    if (mes < 1 || mes > 12) {
        printf("Data invalida.\n");
    } else {
        if (mes == 2) {
            if (bissexto && dia >= 1 && dia <= 29) {
                printf("Data valida.\n");
            } else if (!bissexto && dia >= 1 && dia <= 28) {
                printf("Data valida.\n");
            } else {
                printf("Data invalida.\n");
            }
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if (dia >= 1 && dia <= 30) {
                printf("Data valida.\n");
            } else {
                printf("Data invalida.\n");
            }
        } else {
            if (dia >= 1 && dia <= 31) {
                printf("Data valida.\n");
            } else {
                printf("Data invalida.\n");
            }
        }
    }

    return 0;
}
