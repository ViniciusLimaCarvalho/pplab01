#include<stdio.h>

int positivo(int num);

int main(){
    int numero;
    printf("Insira um numero: ");
    scanf("%d",&numero);
    if(positivo(numero) == -1){
        printf("O numero eh negativo");
    }

    else if(positivo(numero) == 0){
        printf("O numero eh 0");
    }

    else{
        printf("O numero eh positivo");
    }

    return 0;

}



int positivo(int num){
    if(num < 0){
        return (-1);
    }
    else if(num > 0){
        return 1;
    }
    else{
        return 0;
    }
}
