#include<stdio.h>

struct pessoa{
    char nome[100], endereco[1000];
    int idade;
};

int main(){
    struct pessoa p;

    printf("Insira o nome da pessoa: ");
    setbuf(stdin,NULL);
    fgets(p.nome,100,stdin);

    printf("Insira a idade da pessoa: ");
    scanf("%d",&p.idade);

    printf("Insira o endereco da pessoa: ");
    setbuf(stdin,NULL);
    fgets(p.endereco,1000,stdin);

    printf("\n\nNome: %s",p.nome);
    printf("Idade: %d\n",p.idade);
    printf("Endereco: %s",p.endereco);

    return 0;
}