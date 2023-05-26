#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str1[100], str2[100];
    char *p1, *p2;
    int i, j = 0;
    int len1, len2, verificar = 0;

    p1 = str1;
    p2 = str2;

    printf("Insira a primeira string: ");
    setbuf(stdin,NULL);
    fgets(str1,100,stdin);

    printf("Insira a segunda string: ");
    setbuf(stdin,NULL);
    fgets(str2,100,stdin);

    len2 = strlen(str2);

    for(i = 0; *(p1 + i) != '\0'; i++){
        if(*(p1+i) == *(p2+j)){
            j++;
        }
        else{
            j = 0;
        }

        if((j + 2) == len2){
            verificar = 1;
            break;
        }
    }

    if(verificar == 1){
        printf("A segunda eh substring da primeira");
    }
    else{
        printf("A segunda nao eh substring da primeira");
    }

    return 0;
}
