#include <stdio.h>

void desenha_linha(int num_sinais){
    for(int i = 0; i < num_sinais; i++){
        printf("=");
    }
    printf("\n");
}

int main(){
    int num_sinais;
    
    printf("Digite quantos sinais de igual deseja desenhar: ");
    scanf("%d", &num_sinais);
    
    desenha_linha(num_sinais);
    
    return 0;
}
