#include<stdio.h>

int main()
{
    int N, impar, i;
    printf("insira um numero\n");
    scanf("%d",&N);
    impar = 1;
    for(i = 1; i <= N; i++){
        printf("%d ",impar);
        impar += 2;
    }
    return 0;
    
}