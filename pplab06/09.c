#include<stdio.h>
#include<math.h>

struct complexo{
    float real;
    int imagi;
};


int main(){
    struct complexo x, y;
    struct complexo soma, subtracao;
    float modulo_x, modulo_y, produto;



    printf("Insira um numero complexo (no formato 'x+yi'): ");  
    scanf("%f+%di",&x.real,&x.imagi);

    printf("Insira outro numero complexo (no formato 'x+yi'): ");
    scanf("%f+%di",&y.real,&y.imagi);



    soma.real = x.real + y.real;
    soma.imagi = x.imagi + y.imagi;

    subtracao.real = x.real - y.real;
    subtracao.imagi = x.imagi - y.imagi;

    produto = (x.real * y.real) - (x.imagi * y.imagi);
        
    modulo_x = sqrt(pow(x.real,2) + pow(x.imagi,2));
    modulo_y = sqrt(pow(y.real,2) + pow(y.imagi,2));



    printf("A soma dos numeros complexos eh igual a %.1f+%di\n",soma.real,soma.imagi);

    printf("A subtracao dos numeros complexos eh igual a %.1f+%di\n",subtracao.real,subtracao.imagi);

    printf("O produto dos numeros complexos eh igual a %.1f\n",produto);

    printf("O modulo do primeiro numero complexo eh %.1f\n",modulo_x);

    printf("O modulo do segundo numero complexo eg %.1f\n",modulo_y);



    return 0;
}