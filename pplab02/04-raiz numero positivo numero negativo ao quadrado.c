#include<stdio.h>
#include<math.h>

int main(){
    float x,y;
    printf("insira um numero\n");
    scanf("%f",&x);
    if(x > 0){
        y = sqrt(x);
        printf("a raiz quadrada desse numero eh %f",y);
    }
    else{
        y = pow(x,2);
        printf("esse numero ao quadrado eh %f",y);
    }
return 0;



}
