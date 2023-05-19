#include<stdio.h>

void swap(int *a, int *b);

void sort(int *a, int *b, int *c);

int main(){
    int x, y, z;
    int *p1, *p2,*p3;

    p1 = &x;
    p2 = &y;
    p3 = &z;

    printf("Insira um numero inteiro: ");
    scanf("%d",p1);

    printf("Insira outro numero inteiro: ");
    scanf("%d",p2);

    printf("Insira mais um numero inteiro: ");
    scanf("%d",p3);

    sort(p1,p2,p3);

    printf("Numeros em ordem crescente: %d (endereco: %p) < %d (endereco: %p)< %d (endereco: %p)",*p1,p1,*p2,p2,*p3,p3);


    return 0;
}

void swap(int *a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int*a,int*b,int*c){
    if(*a>*b){
        swap(a,b);
    }
    if(*b>*c){
        swap(b,c);
    }
    if(*a>*b){
        swap(a,b);
    }
}

