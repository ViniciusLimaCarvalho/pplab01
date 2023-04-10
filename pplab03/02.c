#include<stdio.h>

int main()
{
    int num,x = 0,numero = 0;
    for(num = 1; num <= 100; num++){
        printf("%d,",num);
    }
    printf("\n\n");
    while(numero <= 99){
        numero = numero + 1;
        printf("%d,",numero);
    }
    printf("\n\n");
    do{
        x = x + 1;
        printf("%d,",x);
    }while(x <= 99);
    return 0;
}
