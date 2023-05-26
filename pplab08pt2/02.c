#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    float mat[3][3];
    int i, j;

    srand(time(NULL));


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            mat[i][j] = rand();
        }
    }


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Endereco [%d][%d]: %p  ",i+1,j+1, &mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
