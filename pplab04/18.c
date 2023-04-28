#include <stdio.h>

int potencia(int x, int z) {
    int resultado = 1;
    
    for(int i = 0; i < z; i++){
        resultado *= x;
    }
    
    return resultado;
}

int main() {
    int x, z, resultado;
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Digite o valor de z: ");
    scanf("%d", &z);
    
    resultado = potencia(x, z);
    
    printf("%d elevado a %d = %d\n", x, z, resultado);
    
    return 0;
}
