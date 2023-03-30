#include<stdio.h>

int main()
{
    int escolha;
    float valor1, valor2, resultado;
    do{
        printf("escolha uma das operacoes a seguir\n");
        printf("(1)adicao\n");
        printf("(2)subtracao\n");
        printf("(3)multiplicacao\n");
        printf("(4)divisao\n");
        scanf("%d",&escolha);
    } while((escolha < 1) || (escolha > 4));
    printf("insira o primeiro valor\n");
    scanf("%f",&valor1);
    printf("insira o segundo valor\n");
    scanf("%f",&valor2);
    switch(escolha){
        case 1:
            resultado = valor1 + valor2;
            printf("o resultado eh %.2f",resultado);
            break;
        case 2:
            resultado = valor1 - valor2;
            printf("o resultado eh %.2f",resultado);
            break;
        case 3:
            resultado = valor1 * valor2;
            printf("o resultado eh %.2f",resultado);
            break;
        case 4:
            resultado = valor1 / valor2;
            printf("o resultado eh %.2f",resultado);
    }
    return 0;
}