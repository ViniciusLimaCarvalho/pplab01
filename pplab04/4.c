#include<stdio.h>
#include<math.h>
define PI 3.141592

float vesfera(float raio);

int main(){
    float r;
    printf("Insira o raio da esfera: ");
    scanf("%f",&r);
    if(r > 0){
        printf("O volume da esfera eh %.2f", vesfera(r));
    }
    else{
        printf("Valor do raio invalido");
    }
    return 0;
}

float vesfera(float raio){
    return (4/3 * PI) * pow(raio,3);
}
