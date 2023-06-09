#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int negativos(float *vet, int N);

int main(){
    float *vet;
    int N, i;
    srand(time(NULL));

    printf("Insira o tamanho do array: ");
    scanf("%d",&N);
    printf("\n");

    vet = (float *) calloc(N,sizeof(float));

    for(i = 0; i < N; i++){
        printf("Insira o %do. numero: ",i+1);
        scanf(" %f",&vet[i]);
    }

    printf("\nHa %d numeros negativos nesse array",negativos(vet,N));

}

int negativos(float *vet, int N){
    int i, count = 0;

    for(i = 0; i < N; i++){
        if(*(vet + i) < 0){
            count += 1;
        }
    }

    return count;
}