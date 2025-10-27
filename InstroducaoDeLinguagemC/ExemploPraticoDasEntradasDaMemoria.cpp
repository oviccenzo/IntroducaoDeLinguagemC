#include "cstdio"

int main(){

    int num1;

    //numero octal
    printf("Digite um numero octal: ");
    scanf("%o",&num1);
    printf("O numero octal eh: %o",num1);

    printf("\n\n");

    double num2;
    //numero geral
    printf("Digite um numero geral: ");
    scanf("%lg",&num2);
    printf("O numero geral eh: %g",num2);

    printf("\n\n");

    //decimal sem sinal
    unsigned int num3;
    printf("Digite um numero decimal sem sinal: ");
    scanf("%u",&num3);
    printf("O numero sem sinal eh: %u",num3);

    printf("\n\n");

    //hexadecimal
    int num4;
    printf("Digite um numero hexadecimal: ");
    scanf("%x",&num4);
    printf("O numero hexadecimal eh: %x",num4);

    printf("\n\n");

    //ponteiro
    int num5;
    void *ptr;
    printf("Digite um numero de memoria do ponteiro: ");
    scanf("%p",&ptr);
    printf("O numero do ponteiro eh: %p\n\n",ptr);

    return 0;
}

