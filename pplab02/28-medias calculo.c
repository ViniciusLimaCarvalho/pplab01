#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z, opcao;
    float media;
    
    printf("Digite 3 numeros inteiros positivos\n");
    scanf("%d %d %d", &x, &y, &z);
    do{
    printf("Escolha uma opcao:\n");
    printf("(1) Geometrica\n");
    printf("(2) Ponderada\n");
    printf("(3) Harmonica\n");
    printf("(4) Aritmetica\n");
    scanf("%d", &opcao);
    }while((opcao < 1) || (opcao > 4));
    switch(opcao) {
        case 1:
            media = pow(x * y * z, 1.0/3.0);
            printf("Media geometrica: %.2f\n", media);
            break;
        case 2:
            media = (1*x + 2*y + 3*z) / 6.0;
            printf("Media ponderada: %.2f\n", media);
            break;
        case 3:
            media = 3.0 / (1.0/x + 1.0/y + 1.0/z);
            printf("Media harmonica: %.2f\n", media);
            break;
        case 4:
            media = (x + y + z) / 3.0;
            printf("Media aritmetica: %.2f\n", media);
            break;
        default:
            printf("Opcao invalida.\n");
    }
    
    return 0;
}
