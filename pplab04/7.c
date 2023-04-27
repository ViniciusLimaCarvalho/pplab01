#include<stdio.h>

float fahrenheit(float celsius);

int main(){
    float temp_C;
    printf("Insira a temperatura em graus Celsius: ");
    scanf("%f",&temp_C);
    printf("A temperatura em Fahrenheit eh %.1f",fahrenheit(temp_C));
    return 0;
}

float fahrenheit(float celsius){
    float temp;
    temp = ((celsius * 1.8) + 32.0);
    return temp;
}
