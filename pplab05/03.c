#include<stdio.h>

int main(){
    int vet[6], i, j;
    for(i = 0; i < 6; i++){
        printf("Insira o %do. valor: ",i+1);
        scanf("%d",&vet[i]);
    }
    for(j = 5; j >= 0; j--){
        printf("%d\n",vet[j]);
    }

    return 0;
}
