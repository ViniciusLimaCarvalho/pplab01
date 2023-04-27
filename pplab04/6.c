#include<stdio.h>

int tot_segundos(int horas, int minutos, int segundos);

int main(){
    int ent_horas, ent_minutos, ent_segundos;
    printf("Insira horas minutos e segundos no formato 'HH:MM:SS': ");
    scanf("%d:%d:%d",&ent_horas,&ent_minutos,&ent_segundos);
    if((ent_minutos < 60) && (ent_segundos < 60)){
        printf("O total de segundos eh %d", tot_segundos(ent_horas,ent_minutos,ent_segundos));
    }
    else{
        printf("Formato invalido");
    }
    return 0;
}

int tot_segundos(int horas, int minutos, int segundos){
    return (horas * 3600) + (minutos * 60) + segundos;
}
