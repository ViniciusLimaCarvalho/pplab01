#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct produto{
    float preco;
    char nome[50];
};

int main(){
    struct produto compra;
    float valorTot, valorDes, valorPag;

    printf("Insira o nome da mercadoria: ");
    fgets(compra.nome,50,stdin);
    compra.nome[strlen(compra.nome) - 1] = '\0';

    printf("Insira o valor da mercadoria: R$");
    scanf("%f",&compra.preco);

    valorTot = compra.preco;
    valorDes = 0.1 * compra.preco;
    valorPag = compra.preco - valorDes;

    printf("O valor total a ser pago pelo produto %s eh R$%.2f, com um desconto de 10%% (R$%.2f) sobre o valor total (R$%.2f).",compra.nome,valorPag,valorDes,valorTot);


    return 0;
}