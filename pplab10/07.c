#include<stdio.h>
#include<math.h>

struct coord_polar{
    int r;
    int a;
};

struct coord_cartesiana{
    float x;
    float y;
};




int main(){
    struct coord_polar CP;
    struct coord_cartesiana CC;

    printf("Insira o raio da coordenada polar do ponto: ");
    scanf("%d",&CP.r);

    printf("Insira o argumento da coordenada polar do ponto: ");
    scanf("%d",&CP.a);

    CC.x = CP.r * cos(CP.a);
    CC.y = CP.r * sin(CP.a);

    printf("O ponto, em coordenadas cartesianas esta em (%.2f,%.2f)",CC.x,CC.y);

    return 0;
}