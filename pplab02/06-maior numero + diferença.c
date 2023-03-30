#include<stdio.h>


int main(){
    int x,y,z;
    printf("insira um numero\n");
    scanf("%d",&x);
    printf("insira outro numero\n");
    scanf("%d",&y);
    if(x > y){
        z = x - y;
        printf("\n%d\na diferenca eh de %d",x,z);
    }
    else if(x < y){
        z = y - x;
        printf("\n%d\na diferenca eh de %d",y,z);
    }

    return 0;
}
