#include <stdio.h>

int main()
{
    float h,peso;
    char sexo;
    printf("insira a altura da pessoa\n");
    scanf("%f",&h);
    printf("insira o sexo da pessoa (M/F)\n");
    scanf(" %c",&sexo);
    if(sexo == 'M'){
        peso = (72.7 * h) - 58.0;
        printf("o peso ideal eh %.1f",peso);
    } else if(sexo == 'F'){
        peso = (62.1 * h) - 44.7;
        printf("o peso ideal eh %.1f",peso);
    } else {
        printf("sexo invalido");
    }
    
    return 0;
}