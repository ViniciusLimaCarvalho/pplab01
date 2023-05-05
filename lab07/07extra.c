#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char frase[100], fraseCebolinha[100];
    int i, l, j, m;

    printf("Insira uma frase: ");
    setbuf(stdin, NULL);
    fgets(frase,100,stdin);
    strcpy(fraseCebolinha,frase);
    int len = strlen(frase);

    for (i = 0; i < strlen(frase) - 1; i++){
        l = i + 1;
        j = l + 1;
        if(frase[i+1] != 32 && frase[i+1] != '\0'){
            if(frase[i] == 'r'){
                if(frase[i+1] == 'r'){
                    for(m = l; m <= len; m++){
                        fraseCebolinha[m] = fraseCebolinha[j];
                        j++;
                    }
                }
                else{
                    fraseCebolinha[i] = 'l';
                }
            }
            else if(frase[i] == 'R'){
                fraseCebolinha[i] = 'L';
            }
        }
        else{
            continue;
        }
    }

    fraseCebolinha[len-1]='\0';

    printf("%s",fraseCebolinha);

    return 0;
}
