#include <stdio.h>

int main() {
    float baseMaior, baseMenor, altura, area;

    printf("digite a base maior do trapezio\n");
    scanf("%f", &baseMaior);

    printf("digite a base menor do trapezio\n");
    scanf("%f", &baseMenor);

    printf("digite a altura do trapezio\n");
    scanf("%f", &altura);

    if(baseMaior <= 0 || baseMenor <= 0) {
        printf("as bases devem ser maiores que zero\n");
    } else {
        area = (baseMaior + baseMenor) * altura / 2;
        printf("a area do trapezio eh %.2f\n", area);
    }

    return 0;
}
