#include<stdio.h>
#include<stdlib.h>

int main(){
    int *vet, i;

    vet = (int *) calloc(5,sizeof(int));

    printf("Insira os 5 numeros do array: ");
    
    for(i = 0; i < 5; i++){
        scanf("%d",(vet + i));
    }
    
    printf("\n\n");

    for(i = 0; i < 5; i++){
        if(i != 4){
            printf("%d, ",*(vet + i));
        }
        else{
            printf("%d",*(vet + i));
        }
    }

    free(vet);

    return 0;
}