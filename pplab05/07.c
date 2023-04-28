#include<stdio.h>

int eh_par(int num);

int main(){
    int vet[6], i, soma_impar = 0, soma_par = 0;

    for(i = 0; i < 6; i++){
        printf("Insira o %do. numero: ", i + 1);
        scanf("%d",&vet[i]);
    }

    for(i = 0; i < 6; i ++){
        if(eh_par(vet[i]) == 1){
            soma_par += vet[i];
        }
        else{
            soma_impar += vet[i];
        }
    }

    for(i = 0; i < 6; i ++){
        if(eh_par(vet[i]) == 1){
            printf("O numero %d eh par\n",vet[i]);
        }
        else{
            printf("O numero %d eh impar\n",vet[i]);
        }
    }
    printf("A soma dos numeros pares eh %d\n",soma_par);
    printf("A soma dos numeros impares eh %d\n",soma_impar);

    return 0;
}

int eh_par(int num){
    if(num % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
