#include <stdio.h>

int formaTriangulo(float a, float b, float c){
    if(a < b + c && b < a + c && c < a + b){
        return 1; 
    }
    else{
        return 0; 
    }
}


void tipoTriangulo(float a, float b, float c){
    if(a == b && b == c){
        printf("Triangulo equilatero.\n");
    }
    else if(a == b || a == c || b == c){
        printf("Triangulo isosceles.\n");
    }
    else{
        printf("Triangulo escaleno.\n");
    }
}

int main(){
    float a, b, c;
    
    printf("Digite as medidas dos tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if(formaTriangulo(a, b, c)){
        tipoTriangulo(a, b, c);
    }
    else{
        printf("As medidas nao formam um triangulo.\n");
    }
    
    return 0;
}
