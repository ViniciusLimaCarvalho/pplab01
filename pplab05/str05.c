#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[30];
    int i;

    loop:
    printf("Insira uma palavra so com letras maiusculas: ");
    fgets(str,30,stdin);

    for(i = 0; i < (strlen(str) - 1); i++){
        if((str[i] >= 65) && (str[i] <= 90)){
            str[i] += 32;
        }
        else{
            printf("Erro: todas as letras tem que ser maiusculas\n\n");
            goto loop;
            break;
        }
    }

    printf("%s",str);

    return 0;
}