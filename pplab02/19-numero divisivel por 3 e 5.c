#include<stdio.h>

int main()
{
    int numero,divisao1,divisao2;
    printf("insira um numero\n");
    scanf("%d",&numero);
    divisao1 = numero % 3;
    divisao2 = numero % 5;
    if((divisao1 == 0) ^ (divisao2 == 0)){
        if(divisao1 == 0){
            printf("o numero eh divisivel por 3");
        }
        if(divisao2 == 0){
            printf("o numero eh divisivel por 5");
        }
    }
    else{
        if((divisao1 == 0) && (divisao2 == 0)){
            printf("numero divisivel por ambos");
        }
        else{
            printf("nao eh divisivel por nenhum");
        }
        }
    
    return 0;
}