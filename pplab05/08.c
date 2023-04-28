#include<stdio.h>

int main(){
    int i, j, vet[10];

    for(i = 0; i < 10; i++){
        loop:
        printf("Insira o %do. numero: ",i + 1);
        scanf("%d",&vet[i]);
        for(j = 0; j < i; j++){
            if(vet[i] == vet[j]){
                printf("Erro\n\n");
                goto loop;
                break;
            }
        }
    }
    printf("\n\n");
    for(i = 0; i < 10; i++){
        printf("%d\n",vet[i]);
    }

    return 0;
}
