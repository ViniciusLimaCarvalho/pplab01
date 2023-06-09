#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int maior(int tam1, int tam2);

int soma_arrays(int *vet1, int tam1, int *vet2, int tam2, int *soma);

int main(){
    int *vet1 = NULL, *vet2 = NULL, *soma = NULL, tam1, tam2, i;

    srand(time(NULL));

    printf("Insira o tamanho do primeiro array: ");
    scanf("%d",&tam1);

    printf("Insira o tamanho do segundo array: ");
    scanf("%d",&tam2);

    vet1 = (int *) malloc (tam1*sizeof(int));
    vet2 = (int *) malloc (tam2*sizeof(int));
    soma = (int *) malloc (maior(tam1,tam2)*sizeof(int));

    for(i = 0; i < tam1; i++){
        vet1[i] = rand() % 100;
    }

    for(i = 0; i < tam2; i++){
        vet2[i] = rand() % 100;
    }

    printf("\n\nArray 1:\n\n");

    for(i = 0; i < tam1; i++){
        printf("%d\n",*(vet1 + i));
    }

    printf("\n\nArray 2:\n\n");

    for(i = 0; i < tam2; i++){
        printf("%d\n",*(vet2 + i));
    }

    if(soma_arrays(vet1,tam1,vet2,tam2,soma) == 1){
        printf("\n\nSoma:\n\n");

        for(i = 0; i < tam1; i++){
            printf("%d\n",soma[i]);
        }
    }
    else{
        printf("\n\nErro: os arrays nao possuem o mesmo tamanho");
    }
}

int maior(int tam1, int tam2){
    if(tam1 > tam2){
        return tam1;
    }
    else{
        return tam2;
    }
}

int soma_arrays(int *vet1, int tam1, int *vet2, int tam2, int *soma){
    int i;

    if(tam1 != tam2){
        return 0;
    }
    
    else{
        for(i = 0; i < tam1; i++){
            *(soma + i) = *(vet1 + i) + *(vet2 + i);
        }
        return 1;
    }
}