#include <stdio.h>

int main() {
    int mes;

    printf("digite um numero de 1 a 12\n");
    scanf("%d", &mes);

    switch(mes) {
        case 1:
            printf("janeiro\n");
            break;
        case 2:
            printf("fevereiro\n");
            break;
        case 3:
            printf("marco\n");
            break;
        case 4:
            printf("abril\n");
            break;
        case 5:
            printf("maio\n");
            break;
        case 6:
            printf("junho\n");
            break;
        case 7:
            printf("julho\n");
            break;
        case 8:
            printf("agosto\n");
            break;
        case 9:
            printf("setembro\n");
            break;
        case 10:
            printf("outubro\n");
            break;
        case 11:
            printf("novembro\n");
            break;
        case 12:
            printf("dezembro\n");
            break;
        default:
            printf("Numero invalido!\n");
            break;
    }

    return 0;
}
