#include<stdio.h>

int main()
{
    int par, soma, i;
    par = 0;
    for(i = 1; i <= 50; i++){
        soma += par;
        par += 2;
    }
    printf("a soma dos 50 primeiros pares eh %d",soma);
    return 0;
}