#include<stdio.h>
#include<string.h>

struct pessoa{
    char nome[100];
    char endereco[1000];
    long long int telefone;
};

void ordenar_strings(char v[][100]);

int main(){
    struct pessoa p[5];
    int i;
    char nomes[5][100];

    for(i = 0; i < 5; i++){
        printf("Insira o nome da %da. pessoa: ",i+1);
        setbuf(stdin,NULL);
        fgets(p[i].nome,100,stdin);

        printf("Insira o endereco da %da. pessoa: ",i+1);
        setbuf(stdin,NULL);
        fgets(p[i].endereco,1000,stdin);

        printf("Insira o telefone da %da. pessoa: ",i+1);
        setbuf(stdin,NULL);
        scanf("%lld",&p[i].telefone);

        printf("\n\n");
    }

    for(i = 0; i < 5; i++){
        strcpy(nomes[i],p[i].nome);
    }


    ordenar_strings(nomes);

    for(i = 0; i < 5; i++){
        printf("Nome: %s",nomes[i]);

        printf("Endereco: %s",p[i].endereco);

        printf("Telefone: %lld",p[i].telefone);

        printf("\n\n");
    }

    return 0;
    
}



void ordenar_strings(char v[][100]) {
    int i, j;
    char aux[100];
    
    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(v[i], v[j]) > 0) {
                strcpy(aux, v[i]);
                strcpy(v[i], v[j]);
                strcpy(v[j], aux);
            }
        }
    }
}