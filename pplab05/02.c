#include<stdio.h>

int main(){
    int vet[8], X, Y, i;

    for(i = 0; i < 8; i++){
        printf("Insira o %do. valor: ",i + 1);
        scanf("%d",&vet[i]);
    }

    printf("Insira dois valores de 1 a 8: ");
    scanf("%d %d",&X,&Y);

    X--;
    Y--;


    if((X <= 7) && (X >= 0) && (Y <= 7) && (Y >= 0)){
        printf("A soma do vetor[%d] com o vetor[%d] eh %d",X + 1,Y + 1,vet[X] + vet[Y]);
    }
    else{
        printf("Numero(s) invalido(s)");
    }

    return 0;
}
