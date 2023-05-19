#include<stdio.h>

int main(){
    int x, y;
    int *p1, *p2;

    p1 = &x;
    p2 = &y;

    printf("Insira um numero inteiro: ");
    scanf("%d",p1);

    printf("Insira outro numero inteiro: ");
    scanf("%d",p2);


    printf("Soma = %d\n",*p1 + *p2);
    printf("Multiplicacao = %d\n",*p1 * *p2);
    printf("Subtracao = %d\n",*p1 - *p2);
    if(*p2 != 0){
        printf("Divisao = %f",(float)*p1 / *p2);
    }

    return 0;
}
