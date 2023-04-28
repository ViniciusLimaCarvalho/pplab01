#include<stdio.h>
#include<math.h>

float hipotenusa(float a, float b);

int main(){
    int i;
    float cat[2];
    for(i = 0; i < 2; i++){
        printf("Insira o comprimento do %do. cateto: ",i+1);
        scanf("%f",&cat[i]);
    }
    printf("O valor da hipotenusa eh %.1f",hipotenusa(cat[0],cat[1]));
    return 0;
}

float hipotenusa(float a, float b){
    float aux;
    aux = sqrt(pow(a,2) + pow(b,2));
    return aux;
}
