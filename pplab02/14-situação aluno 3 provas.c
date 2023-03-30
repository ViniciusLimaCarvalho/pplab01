#include <stdio.h>

int main() {
    float nota_trabalho, nota_semestral, nota_final, media;
    printf("digite a nota do trabalho de laboratorio\n");
    scanf("%f", &nota_trabalho);
    printf("digite a nota da avaliacao semestral\n");
    scanf("%f", &nota_semestral);
    printf("digite a nota do exame final\n");
    scanf("%f", &nota_final);

    media = (2*nota_trabalho + 3*nota_semestral + 5*nota_final)/10;
    printf("media final: %.1f\n", media);

    if(media >= 0 && media < 3) {
        printf("aluno reprovado\n");
    } else if(media >= 3 && media < 5) {
        printf("aluno em recuperacao.\n");
    } else {
        printf("aluno aprovado.\n");
    }

    return 0;
}
