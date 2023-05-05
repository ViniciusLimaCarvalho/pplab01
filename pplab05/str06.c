#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[30];
    int i;

    loop:
    printf("Insira uma palavra so com letras minusculas: ");
    fgets(str,30,stdin);

    for(i = 0; i < (strlen(str) - 1); i++){
        if((str[i] >= 97) && (str[i] <= 122)){
            str[i] -= 32;
        }
        else{
            printf("Erro: todas as letras tem que ser minusculas\n\n");
            goto loop;
            break;
        }
    }

    printf("%s",str);

    return 0;
}