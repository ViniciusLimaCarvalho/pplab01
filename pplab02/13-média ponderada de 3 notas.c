#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("digite a primeira nota\n");
    scanf("%f", &nota1);

    printf("digite a segunda nota\n");
    scanf("%f", &nota2);

    printf("digite a terceira nota\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + (nota3 * 2)) / 4;

    printf("a media ponderada eh %.2f\n", media);

    if (media >= 60) {
        printf("aluno aprovado");
    } else {
        printf("aluno reprovado");
    }

    return 0;
}
