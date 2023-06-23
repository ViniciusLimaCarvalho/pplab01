#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int d1,d2,n,i;
    char relacao;
    srand(time(NULL));
    printf("insira quantas vezes os dados serao lancados\n");
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;
        if(d1 < d2){
            relacao = '<';
        }
        else if(d1 > d2){
            relacao = '>';
        }
        else{
            relacao = '=';
        }
        printf("\nd1 = %d %c d2 = %d\n",d1,relacao,d2);
    }
    return 0;
}