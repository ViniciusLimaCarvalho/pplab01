#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

struct carta{         //declaracao da estrutura carta
    int naipe;
    int valor;
};

int main(){
    struct carta c[3][2];
    int i, j;
    char naipesjog[2][3][10], valoresjog[2][3][10];

    srand(time(NULL));

    for(i = 0; i < 3; i++){     //loop de geracao dos numeros aleatorios
        for(j = 0; j < 2; j++){
            generation:
            c[i][j].valor = rand() % 14;
            c[i][j].naipe = rand() % 5;
            if(c[i][j].valor == 0 || c[i][j].naipe == 0){
                goto generation;
            }
        }
    }

    for(i = 0; i < 3; i++){         //loop que converte os numeros aleatorios em naipes e valores reais do baralho
        for(j = 0; j < 2; j ++){
            switch(c[i][j].naipe){
                case 1:
                    strcpy(naipesjog[j][i], "ouros");
                    break;
                case 2:
                    strcpy(naipesjog[j][i], "copas");
                    break;
                case 3:
                    strcpy(naipesjog[j][i], "paus");
                    break;
                case 4:
                    strcpy(naipesjog[j][i], "espadas");
                    break;
            }
            switch(c[i][j].valor){
                case 1:
                    strcpy(valoresjog[j][i], "as");
                    break;
                case 11:
                    strcpy(valoresjog[j][i], "valete");
                    break;
                case 12:
                    strcpy(valoresjog[j][i], "dama");
                    break;
                case 13:
                    strcpy(valoresjog[j][i], "rei");
                    break;
                default:
                    sprintf(valoresjog[j][i], "%d", c[i][j].valor);
                    break;
            }
        }
    }

    for(j = 0; j < 2; j++){         //loop de saida
        printf("Mao do jogador %d:\n",j + 1);
        for(i = 0; i < 3; i++){
            printf("%s de %s\n",valoresjog[j][i], naipesjog[j][i]);            
        }
        printf("\n\n");
    }

    return 0;
}
