#include<stdio.h>
#include<string.h>

struct aluno{
    char nome[100];
    char matricula[30];
    float media_final;
};

int aprovado(int num);    //funcao para verificar se a media final do aluno eh maior que 5

int main(){
    struct aluno a[10], ap[10], rep[10];
    int i, count_ap = 0, count_rep = 0;

    for(i = 0; i < 10; i++){
        printf("Insira o nome do %do. aluno: ",i + 1);
        setbuf(stdin,NULL);
        fgets(a[i].nome,100,stdin);

        printf("Insira a matricula do %do. aluno: ",i + 1);
        setbuf(stdin,NULL);
        fgets(a[i].matricula,30,stdin);
        setbuf(stdin,NULL);

        printf("Insira a media final do %do. aluno: ",i + 1);
        scanf("%f",&a[i].media_final);

        printf("\n\n");
    }


    for(i = 0; i < 10; i++){
        if(aprovado(a[i].media_final) == 1){
            strcpy(ap[count_ap].nome,a[i].nome);
            strcpy(ap[count_ap].matricula,a[i].matricula);
            ap[count_ap].media_final = a[i].media_final;

            count_ap++;
        }
        else{
            strcpy(rep[count_rep].nome,a[i].nome);
            strcpy(rep[count_rep].matricula,a[i].matricula);
            rep[count_rep].media_final = a[i].media_final;

            count_rep++;
        }
    }

    printf("Aprovados:\n\n");

    for(i = 0; i < count_ap; i++){
        printf("Nome: %s",ap[i].nome);
        printf("Matricula: %s",ap[i].matricula);
        printf("Media final: %.1f",ap[i].media_final);

        printf("\n\n");
    }

    printf("Reprovados:\n\n");

    for(i = 0; i < count_rep; i++){
        printf("Nome: %s",rep[i].nome);
        printf("Matricula: %s",rep[i].matricula);
        printf("Media final: %.1f",rep[i].media_final);

        printf("\n\n");
    }


    return 0;
}




int aprovado(int num){
    if(num >= 5.0){
        return 1;
    }
    else{
        return 0;
    }
}
