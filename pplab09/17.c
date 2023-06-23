#include<stdio.h>

int main(){
    float ano, chico = 1.5, ze = 1.1;
    for(ano = 1; chico >= ze; ano++){
        chico += 0.02;
        ze += 0.03;
    }
    printf("demoram %.0f anos para que ze seja maior que chico",ano);
    return 0;
}