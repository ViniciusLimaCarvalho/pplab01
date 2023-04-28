#include <stdio.h>

float operacao(float num1, float num2, char operador){
    float resultado;
    
    switch(operador){
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            printf("Operador invalido!");
            return 0;
    }
    
    return resultado;
}

int main(){
    float num1, num2, resultado;
    char operador;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);
    
    resultado = operacao(num1, num2, operador);
    
    printf("Resultado: %.2f", resultado);
    
    return 0;
}
