#include<stdio.h>

int main(){
    int saque, n100, n50, n20, n10, n5, n2, n1;
    printf("Digite o quanto quer sacar: ");
    scanf("%d",&saque);

    n100 = saque / 100;
    saque = saque % 100;

    n50 = saque / 50;
    saque = saque % 50;

    n20 = saque / 20;
    saque = saque % 20;

    n10 = saque / 10;
    saque = saque % 10;

    n5 = saque / 5;
    saque = saque % 5;

    n2 = saque / 2;
    saque = saque % 2;

    n1 = saque / 1;
    saque = saque % 1;

    printf("\nQuantidade de notas:\n");
    printf("Notas de 100: %d\n",n100);
    printf("Notas de 50: %d\n",n50);
    printf("Notas de 20: %d\n",n20);
    printf("Notas de 10: %d\n",n10);
    printf("Notas de 5: %d\n",n5);
    printf("Notas de 2: %d\n",n2);
    printf("Notas de 1: %d\n",n1);

    return 0;
}