#include<stdio.h>
#include<math.h>

int main(){
    int qtdade_num;
    printf("quantos numeros voce quer inserir ?\n");
    scanf("%d",&qtdade_num);
    for(int i = 1; i <= qtdade_num; i++){
        float num;
        printf("insira o %do numero\n\n",i);
        scanf("%f",&num);
        printf("\no numero ao quadrado eh %.2f\no numero ao cubo eh %.2f\na raiz quadrada desse numero eh %.2f\n\n\n",pow(num,2),pow(num,3),sqrt(num));
    }
    return 0;
}