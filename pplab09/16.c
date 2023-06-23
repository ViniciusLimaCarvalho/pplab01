#include<stdio.h>
#include<math.h>

int main(){
    float num1, num2;
    int opcao;
    do{
    printf("insira o primeiro numero\n");
    scanf("%f",&num1);
    printf("insira o segundo numero\n");
    scanf("%f",&num2);
    printf("\nSelecione uma operacao\n");
    printf("(1) ADICAO\n");
    printf("(2) SUBTRACAO\n");
    printf("(3) MULTIPLICACAO\n");
    printf("(4) DIVISAO\n");
    printf("(5) SAIDA\n\n");
    scanf("%d",&opcao);
         switch(opcao){
            case 1:
                printf("\nresultado: %.1f\n\n",num1 + num2);
                 break;
            case 2:
                printf("\nresultado: %.1f\n\n",sqrt(pow(num1 - num2,2)));
                break;
            case 3:
                printf("\nresultado: %.1f\n\n",num1 * num2);
                break;
            case 4:
                printf("\nresultado: %.1f\n\n",num1 / num2);
                break;
            case 5:
                return 0;
            default:
                printf("opcao invalida!\n\n\n");
         }
    }while((opcao < 5) || (opcao > 5));
}