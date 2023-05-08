#include<stdio.h>

struct horario{
    int horas, minutos, segundos;
};

struct data{
    int dia, mes, ano;
};

struct compromisso{
    struct horario h;
    struct data d;
    char nome[100];
};

int main(){
    struct compromisso comp;

    printf("Insira o nome do compromisso: ");
    setbuf(stdin,NULL);
    fgets(comp.nome,100,stdin);

    printf("Insira a data do compromisso (no formato DD/MM/AAAA): ");
    scanf(" %d/%d/%d",&comp.d.dia,&comp.d.mes,&comp.d.ano);

    printf("Insira a data do compromisso (no formato HH:MM:SS): ");
    scanf(" %d:%d:%d",&comp.h.horas,&comp.h.minutos,&comp.h.segundos);

    printf("\n\nCompromisso: %s",comp.nome);
    printf("Data: %d/%d/%d\n",comp.d.dia,comp.d.mes,comp.d.ano);
    printf("Horario: %2d:%2d:%2d",comp.h.horas,comp.h.minutos,comp.h.segundos);

    return 0;
}