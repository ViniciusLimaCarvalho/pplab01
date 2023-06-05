#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void maior_nvezes(int *vet, int tam, int *n, int *maior);

int main(){
    int vet[15], n, maior, *p1, *p2, *p3, i;
    p1 = vet;
    p2 = &n;
    p3 = &maior;

    srand(time(NULL));

    for(i = 0; i < 15; i++){
        *(p1 + i) = rand() % 50;
    }

    for(i = 0; i < 15; i++){
        printf("%2d. %d\n",i+1,*(p1 + i));
    }

    maior_nvezes(p1, 15, p2, p3);

    printf("Maior numero: %d\n",maior);
    printf("N de vezes que aparece: %d",n);

    return 0;

}

void maior_nvezes(int *vet, int tam, int *n, int *maior){
    int i;
    *n = 0;
    *maior = *vet;

    for(i = 0; i < tam; i++){
        if(*(vet + i) > *maior){
            *maior = *(vet + i);
        }
    }

    for(i = 0; i < tam; i++){
        if(*(vet + i) == *maior){
            *n += 1;
        }
    }
}