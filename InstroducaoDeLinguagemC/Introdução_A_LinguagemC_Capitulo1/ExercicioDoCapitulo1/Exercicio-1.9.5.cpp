//
// Created by Robert L Resende on 20/06/25.
//
#include "cstdio"

void Programa1(){
    double a,b,resultado;
    a = 1;
    b = 2;
    resultado = a/b;
    printf("a = %f , b = %f, resultado = %f",a,b,resultado);
}

void Programa2(){
    double resultado = 1/2;
    printf("O resultado de dois numero com ponto flutuante eh: %lf",resultado);
}

void Programa3(){
    double resultado = 1.0/ 2.0;
    printf("O resultado de dois numero com ponto flutuante eh: %lf",resultado);
}

int main(){
    Programa1();
    printf("\n");
    Programa2();
    printf("\n");
    Programa3();
}
