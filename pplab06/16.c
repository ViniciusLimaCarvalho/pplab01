#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data{
   int dia, mes, ano;
};

struct compromisso{
   char nome[60];
   struct data d;
};


int main(){
   struct compromisso c[5];
   int i, mesX, anoX;


   for(i = 0; i < 5; i++){
      printf("Insira o %do. compromisso: ",i+1);
      setbuf(stdin,NULL);
      fgets(c[i].nome,60,stdin);

      printf("Insira a data do %do. compromisso (no formato DD/MM/AAAA): ",i+1);
      scanf("%d/%d/%d",&c[i].d.dia,&c[i].d.mes,&c[i].d.ano);
   }

   do{
      printf("\n\n");

      printf("Insira o mes que quer pesquisar: ");
      scanf("%d",&mesX);

      printf("Insira o ano que quer pesquisar: ");
      scanf("%d",&anoX);

      printf("\n\n");

      for(i = 0; i < 5; i++){
         if(mesX == c[i].d.mes && anoX == c[i].d.ano){
            printf("Compromisso: %s",c[i].nome);
         }
      }
   }while(mesX != 0);


   return 0;
}