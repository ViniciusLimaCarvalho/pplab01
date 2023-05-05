#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[100];
    int i, j = 0;

    printf("Insira uma frase: ");
    fgets(str,100,stdin);

    for(i = 0; i < strlen(str); i++){
        if(str[i] != ' '){
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("%s",str);

    return 0;
}
