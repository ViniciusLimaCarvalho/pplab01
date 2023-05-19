#include<stdio.h>


int main(){
    int vet[6],*veto[6],i;
    for(i = 0; i < 6; i++){
        printf("Insira o %do. numero: ",i+1);
        scanf("%d",&vet[i]);
    }

    for(i = 0; i < 6; i++){
        printf("Numero %d: %d\n",i+1,vet[i]);
        printf("Endereco %d: %p\n\n",i+1,veto[i]);
    }

    return 0;
}
