#include<stdio.h>

struct aluno{
    char nome[100], curso[100];
    int matricula;
};

int main(){
    struct aluno a[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("Insira o nome do %do. aluno: ",i + 1);
        setbuf(stdin,NULL);
        fgets(a[i].nome,100,stdin);

        printf("Insira o numero de matricula do %do. aluno: ",i + 1);
        scanf("%d",&a[i].matricula);

        printf("Insira o curso do %do. aluno: ",i + 1);
        setbuf(stdin,NULL);
        fgets(a[i].curso,100,stdin);

        printf("\n\n");
    }

    for(i = 0; i < 5; i++){
        printf("Nome: %s",a[i].nome);
        printf("Matricula: %d\n",a[i].matricula);
        printf("Curso: %s\n",a[i].curso);
    }

    return 0;
}