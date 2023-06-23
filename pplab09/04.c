#include<stdio.h>
#include<stdlib.h>

void aloca(char **str, int tam, char **strV);

void tiraVogal(char *str, int tam, char *strV);

int main(){
    char *str, *strV;
    int tam;

    printf("Insira o tamanho da string: ");
    scanf("%d",&tam);

    aloca(&str, tam, &strV);

    printf("Insira a string: ");
    setbuf(stdin,NULL);
    fgets(str,tam,stdin);

    tiraVogal(str,tam,strV);

    printf("%s",strV);

    

    return 0;
}

void aloca(char **str, int tam, char **strV){
    *str = (char *) calloc(tam,sizeof(char));
    *strV = (char *) calloc(tam,sizeof(char));
}

void tiraVogal(char *str, int tam, char *strV){
    int i, count = 0;
    for(i = 0; i < tam; i++){
        if(str[i] != 'a' && str[i] != 'A' && str[i] != 'e' && str[i] != 'E' && str[i] != 'I' && str[i] != 'i' && str[i] != 'O' && str[i] != 'o' && str[i] != 'u' && str[i] != 'U'){
            strV[count] = str[i];
            count += 1;
        }
    }
}
