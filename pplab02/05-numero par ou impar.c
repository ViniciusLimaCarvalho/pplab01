#include<stdio.h>


int main(){
    int x;
    printf("insira um numero\n");
    scanf("%d",&x);
    if((x % 2) == 1){
        printf("%d eh impar",x);
    }
    else{
        printf("%d eh par",x);
    }
    return 0;

}
