#include<stdio.h>

struct aluno{                //estrutura do tipo aluno
    int matricula, n[3];
    char nome[100];
};

int media_arit(int num[3]);        //funcao para somar as notas de cada aluno e dividir por 3 (media aritmetica)

int maior(int num[5]);       //funcao para descobrir maior media entre os alunos

int menor(int num[5]);       //funcao para descobrir menor media entre os alunos






int main(){
    struct aluno a[5];       
    int i, j, m, media[5], maior_n1, count1 = 1, count2 = 1, count3 = 1;  

    for(i = 0; i < 5; i++){     //primeiro loop: usado para receber a entrada dos dados de 5 alunos
        j = 1;
        printf("Insira o nome do %do. aluno: ",i + 1);
        setbuf(stdin,NULL);
        fgets(a[i].nome,100,stdin);

        printf("Insira o no. de matricula do %do. aluno: ",i + 1);
        scanf("%d",&a[i].matricula);

        while(j <= 3){          //loop para receber a entrada das 3 notas de cada aluno
            printf("Insira a %da. nota do %do. aluno: ",j, i + 1);
            scanf("%d",&a[i].n[j]);
            media[i] = media_arit(a[i].n);
            j++;
        }
    }
    
    maior_n1 = a[0].n[0];       

    for(i = 0; i < 5; i++){     //loop para descobrir maior primeira nota entre os 5 alunos
        if(a[i].n[0] > maior_n1){
            maior_n1 = a[i].n[0];
        }
    }

    for(i = 0; i < 5; i++){     //loop para descobrir qual o nome do aluno de maior primeira nota
        if(a[i].n[0] == maior_n1){
            break;
            count1++;
        }
    }

    for(j = 0; j < 5; j++){     //loop para descobrir qual o nome do aluno de maior media geral
        if(media[j] == maior(media)){
            break;
            count2++;
        }
    }

    for(m = 0; m < 5; m++){     //loop para descobrir qual o nome do aluno de menor media geral
        if(media[m] == menor(media)){
            break;
            count3++;
        }
    }

    printf("A maior primeira nota entre os 5 alunos eh %d, do %s",maior_n1, a[count1].nome);

    printf("A maior media geral entre as notas dos alunos eh %d, do %s",maior(media),a[count2].nome);

    printf("A menor media geral entre as notas dos alunos eh %d, do %s",menor(media),a[count3].nome);

    for(i = 0; i < 5; i++){
        if(media[i] >= 6){
            printf("O aluno %s foi aprovado\n",a[i].nome);
        }
        else{
            printf("O aluno %s foi reprovado\n",a[i].nome);
        }
    }

    return 0;
}






int maior(int num[5]){
    int i, aux;

    aux = num[0];
    
    for(i = 0; i < 5; i++){
        if (num[i] > aux){
            aux = num[i];
        }
    }

    return aux;
}

int menor(int num[5]){
    int i, aux;

    aux = num[0];

    for(i = 0; i < 5; i++){
        if(num[i] < aux){
            aux = num[i];
        }
    }

    return aux;
}

int media_arit(int num[3]){
    int i, soma = 0;
    for(i = 0; i < 3; i++){
        soma += num[i];
    }

    return soma / 3;
}