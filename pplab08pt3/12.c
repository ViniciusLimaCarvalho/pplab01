#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void minmax (int *v, int tam, int *min, int *max);

int main(){
    int *v, min, max, tam, i;
    
    printf("Insira o tamanho do array: ");
    scanf("%d",&tam);
    
    v = (int *) calloc(tam,sizeof(int));
    
    srand(time(NULL));
    
    for(i = 0; i < tam; i++){
        v[i] = rand() % 100;
    }
    
    printf("\n\n");
    
    for(i = 0; i < tam; i++){
        printf("%d\n",v[i]);
    }
    
    minmax(v, tam, &min, &max);
    
    printf("\nValor minimo: %d",min);
    printf("\nValor maximo: %d",max);
    
    return 0;
}

void minmax (int *v, int tam, int *min, int *max){
    int i;
    
    *min = *v;
    *max = *v;
    
    for(i = 0; i < tam; i++){
        if(*(v + i) > *max){
            *max = *(v + i);
        }
        if(*(v + i) < *min){
            *min = *(v + i);
        }
    }
}