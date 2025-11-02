//
// Created by Robert L Resende on 02/11/25.
//
/*Exercicio 1.9.7 Escreva um programa que lê dois números inteiros
 * a e b imprime o resultado do teste a > b*/
#include "cstdio"

int main(){

    int a,b;
    printf("Digite um numero a e o numero b: ");
    scanf("%d %d",&a,&b);
    printf("O numero a eh maior que b ou o numero a e menor que: %d",a>b);
}
