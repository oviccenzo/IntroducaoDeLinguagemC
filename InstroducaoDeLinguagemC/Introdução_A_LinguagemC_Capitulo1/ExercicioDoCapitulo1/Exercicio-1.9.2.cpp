//
// Created by Robert L Resende on 20/06/25.
//
//Escreva funcoes similares ao codigo do exemplo 1.4.1, definindo variaveis de
//tipos e imprimindo-as. use os formatos de leituras e escritas: %d %i %o %x para inteiros
//e %f %e para reais
//Codigos     | significados
//%d ou %i    | inteiros
//%o          | octal
//%x          | hexadecimal
//%f          | float

#include "cstdio"

int main(){

    //inteiro tipo %d, %i, %o, %x para inteiros %f %e para reais
    int a;
    double b;
    char c[50];
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    printf("Digite um numero real: ");
    scanf("%lf", &b);
    printf("Digite uma palavra: ");
    scanf("%s", c);


    printf("O numero digitado inteiro é: %d\n",a);
    printf("O numero octal do inteiro é: %d\n",a);
    printf("O numero hexadecimal inteiro é: %o\n",a);
    printf("O numero octal digitado é: %o\n",b);
    printf("O numero hexadecimal digitado é: %x\n",b);
    printf("O numero em notação cientifica é: %e\n",b);
    printf("A palavra digitada é: %c\n",c);

    return 0;
}