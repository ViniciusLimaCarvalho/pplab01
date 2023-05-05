#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[30], L1, L2;
    int i;

    printf("Insira uma palavra: ");
    fgets(str,30,stdin);

    printf("Insira a letra que quer substituir: ");
    scanf("%c",&L1);

    printf("Insira a letra que vai substituir as ocorrencias da letra anteriormente inserida da palavra: ");
    scanf(" %c",&L2);

    for(i = 0; i < strlen(str); i++){
        if((str[i] == L1)){
            str[i] = L1;
        }
    }

    printf("%s",str);

    return 0;
}