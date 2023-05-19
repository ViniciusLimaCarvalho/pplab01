#include<stdio.h>

int main(){
    int x , y ;
    int *x1, *y1;

    printf("Insira um numero: ");
    scanf("%d",&x);
    printf("Insira outro numero: ");
    scanf("%d",&y);


    x1 = &x;
    y1 = &y;

    if(x1 > y1){
        printf("conteudo de maior endereco: %d (endereco: %p)",x,x1);
    }
    else{
        printf("Conteudo de maior endereco: %d (endereco: %p)",y,y1);
    }
    return 0;
}
