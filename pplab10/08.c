#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct funcionario{
    char nome[100];
    int idade;
    char sexo;
    long long int cpf;
    char data_nasc[11];
    int setor;
    char cargo[30];
    float salario;
};



int main(){
    struct funcionario f;

    printf("Insira o nome do funcionario: ");
    setbuf(stdin,NULL);
    fgets(f.nome,100,stdin);

    printf("Insira a idade do funcionario: ");
    scanf("%d",&f.idade);

    do{
        printf("Insira o sexo do funcionario: ");
        scanf(" %c",&f.sexo);
    }while(f.sexo != 'M' && f.sexo != 'm' && f.sexo != 'F' && f.sexo != 'f');

    printf("Insira o CPF do funcionario (apenas numeros): ");
    scanf(" %lld",&f.cpf);

    do{
        printf("Insira a data de nascimento da pessoa (no formato DD/MM/AAAA): ");
        setbuf(stdin,NULL);
        fgets(f.data_nasc,11,stdin);
        setbuf(stdin,NULL);
    }while(strlen(f.data_nasc) < 9);

    do{
        printf("Insira o setor da pessoa (0-99): ");
        scanf(" %d",&f.setor);
    }while(f.setor > 99 || f.setor < 0);

    printf("Insira o cargo da pessoa: ");
    setbuf(stdin,NULL);
    fgets(f.cargo,30,stdin);

    printf("Insira o salario da pessoa: ");
    scanf(" %f",&f.salario);



    printf("Nome: %s",f.nome);

    printf("Idade: %d\n",f.idade);

    if(f.sexo == 'M' || f.sexo == 'm'){
        printf("Sexo: Masculino\n");
    }
    else{
        printf("Sexo: Feminino\n");
    }

    printf("CPF: %lld\n",f.cpf);

    printf("Data de Nascimento: %s\n",f.data_nasc);

    printf("Setor: %d\n",f.setor);

    printf("Cargo: %s",f.cargo);

    printf("Salario: %.2f",f.salario);


    return 0;
}