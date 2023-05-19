#include<stdio.h>

int main(){
    int claudinas = 5,*c1;
    float amanda = 6.8, *a1;
    char mula = 'o', *m1;

    printf("%d\n",claudinas);
    printf("%f\n",amanda);
    printf("%c\n",mula);

    printf("\n\n");

    c1 = &claudinas;
    a1 = &amanda;
    m1 = &mula;

    (*c1)++;
    (*a1)--;
    (*m1)+=32;

    printf("%d\n",claudinas);
    printf("%f\n",amanda);
    printf("%c\n",mula);


    return 0;

}
