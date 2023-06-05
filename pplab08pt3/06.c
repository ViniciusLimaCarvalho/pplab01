#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.141592

void calc_esfera(float R, float *area, float *volume);

int main(){
    float raio, area, volume, *p1, *p2;
    p1 = &area;
    p2 = &volume;

    printf("Insira o raio da esfera: ");
    scanf("%f",&raio);

    calc_esfera(raio,p1,p2);

    printf("\nArea da superficie da esfera: %.3f\n",area);
    printf("Volume da esfera: %.3f",volume);

    return 0;
}

void calc_esfera(float R, float *area, float *volume){
    *area = 4 * PI * pow(R,2);
    *volume = (4/3) * PI * pow(R,3);
}