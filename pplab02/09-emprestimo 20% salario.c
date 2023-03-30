#include <stdio.h>

int main()
{
    float salario,prestacao;
    printf("insira o salario do trabalhador\n");
    scanf("%f",&salario);
    printf("insira o valor da prestacao do emprestimo\n");
    scanf("%f",&prestacao);
    if(prestacao > (0.2 * salario))
    {
        printf("emprestimo nao concedido");
    }
    else
    {
        printf("emprestimo concedido");
    }
    return 0;
}