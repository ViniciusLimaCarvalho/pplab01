#include<stdio.h>
#include<stdlib.h>

void par(int *vet, int tam, int *pares, int *impares, int *npares, int *nimpares);

int main(){
    int *vet, *pares, *impares, npares, nimpares, tam, i;

    printf("Insira o tamanho do array: ");
    scanf("%d",&tam);

    vet = (int *) calloc(tam,sizeof(int));
    pares = (int *) calloc(tam, sizeof(int));
    impares = (int *) calloc(tam, sizeof(int));

    for(i = 0; i < tam; i++){
        printf("Insira o %do. numero: ",i+1);
        scanf("%d",vet + i);
    }

    par(vet, tam, pares, impares, &npares, &nimpares);

    printf("\n\nHa %d numeros pares ({",npares);
    
    for(i = 0; i < npares; i++){
        if(i != (npares - 1)){
            printf("%d,",pares[i]);
        }
        else{
            printf("%d",pares[i]);
        }
    }

    printf("})\n");


    printf("Ha %d numeros impares ({",nimpares);
    
    for(i = 0; i < nimpares; i++){
        if(i != (nimpares - 1)){
            printf("%d,",impares[i]);
        }
        else{
            printf("%d",impares[i]);
        }
    }

    printf("})\n");

    return 0;
}

void par(int *vet, int tam, int *pares, int *impares, int *npares, int *nimpares){
    int i;
    *npares = 0; *nimpares = 0;

    for(i = 0; i < tam; i++){
        if(*(vet + i) % 2 == 0){
            *(pares + *npares) = *(vet + i);
            ++*npares;
        }
        else{
            *(impares + *nimpares) = *(vet + i);
            ++*nimpares;
        }
    }
}