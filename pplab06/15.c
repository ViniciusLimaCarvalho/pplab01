#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct livro{
   char nome[30];
   char autor[15];
   int ano;
};


int main(){
   struct livro l[5];
   int i;
   char lBusca[30];

   for(i = 0; i < 5; i++){
      printf("Insira o nome do %do. livro: ",i+1);
      setbuf(stdin,NULL);
      fgets(l[i].nome,30,stdin);

      printf("Insira o autor do %do. livro: ",i+1);
      setbuf(stdin,NULL);
      fgets(l[i].autor,15,stdin);

      printf("Insira o ano de lancamento do %do. livro: ",i+1);
      scanf("%d",&l[i].ano);

      printf("\n\n");
   }

   printf("Qual livro voce quer achar? ");
   setbuf(stdin,NULL);
   fgets(lBusca,30,stdin);

   printf("\n\n");

   for(i = 0; i < 5; i++){
      if(strcmp(lBusca,l[i].nome) == 0){
         printf("Nome: %s",l[i].nome);
         printf("Autor: %s",l[i].autor);
         printf("Ano: %d\n",l[i].ano);
      }
   }

   return 0;
}