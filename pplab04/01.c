#include<stdio.h>

int dobro(int num);

int main(){
    int a,b;
    printf("Digite um numero: ");
    scanf("%d",&a);
    b = dobro(a);
    printf("O dobro desse numero eh %d",b);
    return 0;
}

int dobro(int num){
    return num * 2;
}
