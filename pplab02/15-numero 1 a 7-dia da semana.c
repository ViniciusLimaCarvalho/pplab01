#include <stdio.h>

int main() {
    int dia;

    printf("digite um numero de 1 a 7\n");
    scanf("%d", &dia);

    switch(dia) {
        case 1:
            printf("domingo\n");
            break;
        case 2:
            printf("segunda-feira\n");
            break;
        case 3:
            printf("terca-feira\n");
            break;
        case 4:
            printf("quarta-feira\n");
            break;
        case 5:
            printf("quinta-feira\n");
            break;
        case 6:
            printf("sexta-feira\n");
            break;
        case 7:
            printf("sabado\n");
            break;
        default:
            printf("numero invalido\n");
            break;
    }

    return 0;
}
