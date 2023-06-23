#include<stdio.h>
#include<stdlib.h>

int main(){
    int *vet = NULL, i, n;

    printf("Insira o tamanho do array: ");
    scanf("%d",&n);

    vet = (int *) calloc(n,sizeof(int));

    for(i = 0; i < n; i++){
        printf("Insira o %do. numero: ", i + 1);
        scanf("%d",vet + i);
    }

    printf("\n\n");

    for(i = 0; i < n; i++){
        if(i != (n - 1)){
            printf("%d, ",vet[i]);
        }
        else{
            printf("%d",vet[i]);
        }
    }

    return 0;
}