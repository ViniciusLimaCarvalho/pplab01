#include<stdio.h>

struct aluno{
    int matricula;
    char nome[100];
    char disc[15];
    float nota1;
    float nota2;
};



int main(){
    struct aluno a[10];
    int i;
    float media[10];

    for(i = 0; i < 10; i++){
        printf("Insira o nome do %do. aluno: ",i + 1);
        setbuf(stdin,NULL);
        fgets(a[i].nome,100,stdin);

        printf("Insira o no. de matricula do %do. aluno: ",i + 1);
        scanf("%d",&a[i].matricula);

        printf("Insira o codigo da disciplina do %do. aluno: ",i + 1);
        setbuf(stdin,NULL);
        fgets(a[i].disc,15,stdin);

        printf("Insira a primeira nota do %do. aluno: ",i + 1);
        scanf("%f",&a[i].nota1);

        printf("Insira a segunda nota do %do. aluno: ",i + 1);
        scanf("%f",&a[i].nota2);

        media[i] = (a[i].nota1 * 1) + (a[i].nota2 * 2) / 3;

        printf("\n");
    }

    printf("\n\n");

    for(i = 0; i < 10; i++){
        printf("Nome: %s",a[i].nome);
        printf("Matricula: %d\n",a[i].matricula);
        printf("Disciplina: %s",a[i].disc);
        printf("Media: %.1f\n\n",media[i]);
    }

    return 0;
}