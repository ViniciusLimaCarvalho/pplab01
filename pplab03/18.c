#include<stdio.h>

int main(){
    int anos;
    double salario, aumento;
    salario = 2000;
    aumento = 0.015;
    for(anos = 1996; anos <= 2023; anos++){
        salario += aumento * salario;
        aumento += aumento;
    }
    printf("%.2lf",salario);
    return 0;
}