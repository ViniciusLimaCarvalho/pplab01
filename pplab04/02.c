#include<stdio.h>

int mes(int num_dia, int num_mes, int num_ano);

int main(){
    int ndia, nmes, nano,aux;
    printf("Insira uma data no formato DD/MM/AAAA: ");
    scanf("%d/%d/%d",&ndia,&nmes,&nano);
    aux = mes(ndia,nmes,nano);
    return 0;
}

int mes(int num_dia, int num_mes, int num_ano){
    switch(num_mes){
    case 1:
        printf("%d de janeiro de %d",num_dia,num_ano);
        break;
    case 2:
        printf("%d de fevereiro de %d",num_dia,num_ano);
        break;
    case 3:
        printf("%d de marco de %d",num_dia,num_ano);
        break;
    case 4:
        printf("%d de abril de %d",num_dia,num_ano);
        break;
    case 5:
        printf("%d de maio de %d",num_dia,num_ano);
        break;
    case 6:
        printf("%d de junho de %d",num_dia,num_ano);
        break;
    case 7:
        printf("%d de julho de %d",num_dia,num_ano);
        break;
    case 8:
        printf("%d de agosto de %d",num_dia,num_ano);
        break;
    case 9:
        printf("%d de setembro de %d",num_dia,num_ano);
        break;
    case 10:
        printf("%d de outubro de %d",num_dia,num_ano);
        break;
    case 11:
        printf("%d de novembro de %d",num_dia,num_ano);
        break;
    case 12:
        printf("%d de dezembro de %d",num_dia,num_ano);
        break;
    default:
        printf("Data invalida!");
    }

}
