#include<stdio.h>
#include<math.h>

int main(){
    float x,y,z;
    printf("insira um numero\n");
    scanf("%f",&x);
    if(x > 0){
        y = sqrt(x);
        z = pow(x,2);
        printf("a raiz desse numero eh %f\nesse numero ao quadrado eh %f",y,z);
    }
    return 0;



}