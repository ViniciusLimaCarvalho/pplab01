#include <stdio.h>

void mensagemConsumo(float distancia, float litros){
    float consumo = distancia / litros;
    
    printf("Consumo: %.2f Km/l\n", consumo);
    
    if(consumo < 8){
        printf("Venda o carro!");
    }
    else if(consumo >= 8 && consumo <= 14){
        printf("Economico!");
    }
    else{
        printf("Super economico!");
    }
}

int main(){
    float distancia, litros;
    
    printf("Digite a distancia percorrida em Km: ");
    scanf("%f", &distancia);
    
    printf("Digite a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &litros);
    
    mensagemConsumo(distancia, litros);
    
    return 0;
}
