//
// Created by Robert L Resende on 14/06/25.
//
#include "cmath"
#include "cstdio"

int main(){

    float a,resultado;
    double b,resultado1;

    printf("Digite um numero inteiro com ponto flutuante ao quadrado: ");
    scanf("%f",&a);

    printf("Digite dois numero inteiro com ponto flutuante ao quadrado: ");
    scanf("%lf",&b);

    resultado = pow(a,2);
    resultado1 = pow(b,2);

    printf("O resultado do numero ao quadrado é: %.3f\n",resultado);
    printf("\n");
    printf("O resultado do numero ao quadrado é: %.3lf\n",resultado1);

    return 0;
}