#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct usuario{
   char nome[100];
   char endereco[1000];
   int ano, mes, dia;
   char cidade[30];
   char cep[12];
   char email[300];
};

int main(){
   struct usuario u;
   int i, len, count = 0;

   printf("Insira seu nome: ");
   setbuf(stdin,NULL);
   fgets(u.nome,100,stdin);


   printf("Insira seu endereco: ");
   setbuf(stdin,NULL);
   fgets(u.endereco,1000,stdin);


   do{
      printf("Insira sua data de nascimento (no formato DD/MM/AAAA): ");
      scanf("%d/%d/%d",&u.dia,&u.mes,&u.ano);
   }while(u.dia < 1 || u.dia > 31 || u.mes < 1 || u.mes > 12 || u.ano < 1900 || u.ano > 2023);


   printf("Insira sua cidade: ");
   setbuf(stdin,NULL);
   fgets(u.cidade,30,stdin);


   do{
      printf("Insira seu CEP: ");
      setbuf(stdin,NULL);
      fgets(u.cep,12,stdin);
      len = strlen(u.cep);
   }while(len < 8);


   do{
      printf("Insira seu e-mail: ");
      setbuf(stdin,NULL);
      fgets(u.email,300,stdin);
      len = strlen(u.email);
      for(i = 0; i < len; i++){
         if(u.email[i] == '@'){
            count++;
         }
      }
   }while(count != 1);



   printf("\n\n");
   printf("Nome: %s",u.nome);
   printf("Endereco: %s",u.endereco);
   printf("Data de nascimento: %d/%d/%d\n",u.dia,u.mes,u.ano);
   printf("Cidade: %s",u.cidade);
   printf("CEP: %s",u.cep);
   printf("E-mail: %s",u.email);



   return 0;
}