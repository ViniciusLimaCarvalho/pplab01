#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[30], ch;
    int i;

    printf("Insira uma palavra: ");
    fgets(str,30,stdin);

    printf("Insira a letra que vai substituir as vogais da palavra inserida: ");
    scanf("%c",&ch);

    for(i = 0; i < strlen(str); i++){
        if((str[i] == 'a') || (str[i] == 'A') || (str[i] == 'E') || (str[i] == 'e') || (str[i] == 'I') || (str[i] == 'i') || (str[i] == 'O') || (str[i] == 'o') || (str[i] == 'U') || (str[i] == 'u')){
            str[i] = ch;
        }
    }

    printf("%s",str);

    return 0;
}