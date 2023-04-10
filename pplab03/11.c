#include<stdio.h>

int main()
{
    int N, num, i;
    printf("insira um numero\n");
    scanf("%d",&N);
    num = 0;
    ++N;
    for(i = 1; i <= N; i++){
        printf("%d ",num);
        num++;
    }
    return 0;
    }