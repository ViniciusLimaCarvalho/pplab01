#include<stdio.h>

int main(){
    int vet[5], count, menor, maior;

    for(count = 0; count < 5; count++){
        printf("Insira o %do. valor: ",count + 1);
        scanf("%d",&vet[count]);
    }

    maior = vet[0];
    menor = vet[0];


    for(count = 0; count < 5; count++){
        if(vet[count] > maior){
            maior = vet[count];
        }
        else if(vet[count] < menor){
            menor = vet[count];
        }
    }

    printf("O maior numero eh %d e o menor numero eh %d",maior,menor);

    return 0;
}

