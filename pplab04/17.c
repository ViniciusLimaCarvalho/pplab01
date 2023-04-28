#include <stdio.h>

int soma_entre_numeros(int num1, int num2){
    int menor, maior, soma = 0;
    
    if(num1 < num2){
        menor = num1;
        maior = num2;
    }
    else{
        menor = num2;
        maior = num1;
    }

    for(int i = menor + 1; i < maior; i++){
        soma += i;
    }
    
    return soma;
}

int main(){
    int num1, num2;
    
    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &num1, &num2);
    
    printf("A soma dos numeros inteiros existentes entre %d e %d eh: %d\n", num1, num2, soma_entre_numeros(num1, num2));
    
    return 0;
}
