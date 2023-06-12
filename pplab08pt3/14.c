#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int raizes(float A, float B, float C, float *X1, float *X2);

int main(){
    float a, b, c, x1, x2;

    printf("Insira o valor de 'a': ");
    scanf("%f",&a);

    printf("Insira o valor de 'b': ");
    scanf("%f",&b);

    printf("Insira o valor de 'c': ");
    scanf("%f",&c);

    printf("\n\n");

    if(raizes(a,b,c,&x1,&x2) == 0)
    {
        printf("Nao ha raiz real");
    }

    else if(raizes(a,b,c,&x1,&x2) == 1)
    {
        printf("Ha uma raiz real\n");
        printf("X = %f",x1);
    }

    else if(raizes(a,b,c,&x1,&x2) == 2)
    {
        printf("Ha duas raizes reais\n");
        printf("X1 = %f\n",x1);
        printf("X2 = %f",x2);
    }


    return 0;
}

int raizes(float A, float B, float C, float *X1, float *X2){
    int delta;

    delta = pow(B,2) - (4 * A * C);

    if(delta < 0)
    {
        return 0;
    }

    else if(delta == 0)
    {
        *X1 = -B / (2 * A);    
        return 1;
    }

    else if(delta > 0)
    {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }
}