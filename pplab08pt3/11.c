#include<stdio.h>
#include<stdlib.h>

void maiorArray (int *vet, int N, int *maior);

int main(){
    int *p, *vet = NULL;
    int maior, N, k, i;

    p = &maior;

    printf("Insira o tamanho do array: ");
    scanf("%d",&N);

    vet = (int *) malloc(N*sizeof(int));

    printf("Insira os %d valores:\n",N);
    for(i = 0; i < N; i++){
        scanf("%d",&vet[i]);
    }

    printf("Insira o numero de elementos por linha: ");
    scanf("%d",&k);

    for(i = 0; i < N; i++){
        printf("%2d ",vet[i]);
        if((i + 1) % k == 0){
            printf("\n");
        }
    }

    maiorArray(vet,N,p);

    printf("\nO maior valor eh %d",maior);

    return 0;
}

void maiorArray(int *vet, int N, int *maior){
    int i;

    *maior = *vet;

    for(i = 0; i < N; i++){
        if(*(vet + i) > *maior){
            *maior = *(vet + i);
        }
    }
}