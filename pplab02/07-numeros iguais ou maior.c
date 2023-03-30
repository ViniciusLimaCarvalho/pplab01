#include<stdio.h>


int main(){
    float x,y,z;
    printf("insira um numero\n");
    scanf("%f",&x);
    printf("insira outro numero\n");
    scanf("%f",&y);
    if(x > y){
        z = x - y;
        printf("\n%f",x,z);
    }
    else if(x < y){
        z = y - x;
        printf("\n%.2f",y,z);
    }
    else{
        printf("numeros iguais");
    }

    return 0;
}