#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct carro{
   char marca[15];
   int ano;
   float preco;
};


int main(){
   struct carro c[5];
   int i;
   float p;

   for(i = 0; i < 5; i++){
      printf("Insira a marca do %do. carro: ",i + 1);
      setbuf(stdin,NULL);
      fgets(c[i].marca,15,stdin);

      printf("Insira o ano do carro: ");
      scanf("%d",&c[i].ano);

      printf("Insira o preco do carro: ");
      scanf("%f",&c[i].preco);
   }


   do{
      printf("\n\n");
      printf("Insira um valor 'p': ");
      scanf("%f",&p);

      if(p != 0){
         printf("Carros mais baratos que o valor 'p': \n\n");
      }

      for(i = 0; i < 5; i++){
         if(c[i].preco < p){
            printf("Marca:%s",c[i].marca);
            printf("Ano: %d\n",c[i].ano);
            printf("Preco:%.2f\n",c[i].preco);
         }
      }
   }while(p != 0);


   return 0;
}