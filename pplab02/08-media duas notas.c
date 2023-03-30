#include<stdio.h>

int main()
{
    float n1,n2,media;
    printf("insira a primeira nota\n");
    scanf("%f",&n1);
    if(n1 >= 0.0)
    {
        if(n1 <= 10.0)
        {
            printf("insira a segunda nota\n");
            scanf("%f",&n2);
            if(n2 >= 0.0)
            {
                if(n2 <= 10.0)
                {
                    media = (n1 + n2) / 2;
                    printf("a media das notas eh %.1f",media);
                }
                else
                {
                    printf("valor invalido");
                }
            }
            else
            {
                printf("valor invalido");
            }
        }
        else
        {
            printf("valor invalido");
        }
    }
    else
    {
        printf("valor invalido");
    }
    return 0;
}