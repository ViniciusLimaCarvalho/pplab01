#include<stdio.h>

int main(){
    int x = 10, y = 20;
    int *x1, *y1;

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
