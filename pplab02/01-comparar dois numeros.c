#include<stdio.h>

int main(){
    float x,y;
    printf("digite um numero\n");
    scanf("%f",&x);
    printf("digite outro numero\n");
    scanf("%f",&y);
    if(x > y){
        printf("o primeiro numero eh maior que o segundo (%.0f > %.0f)",x,y);
    }
    else if(x < y){
        printf("o segundo numero eh maior que o primeiro (%.02f < %.02f)",x,y);
    }
    else{
        printf("os dois numeros tem o mesmo valor (%.0f = %.0f)",x,y);
    }
    return 0;





}