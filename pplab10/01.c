#include<stdio.h>
#include<stdlib.h>


int main(){
    FILE *arq;
    char ch;

    arq = fopen("arq.txt","w");

    if(arq == NULL){
        printf("Erro ao abrir o arquivo!");
        system("pause");
        exit(1);
    }

    printf("Digite os Caracteres. Digite '0' para sair.\n");

    while(1){
        scanf(" %c",&ch);

        if(ch == '0'){
            break;
        }

        fputc (ch, arq);
    }

    fclose(arq);

    arq = fopen("arq.txt","r");

    printf("Conteudo do arquivo:\n");

    while((ch = fgetc(arq)) != EOF){
        printf("%c",ch);
    }

    fclose(arq);

    return 0;

}