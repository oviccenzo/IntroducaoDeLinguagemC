//
// Created by Robert L Resende on 19/06/25.
//
//Exercicio 1.9.1 escreva versoes similares do codigo do exemplo 1.2.1 usando a instrução printf
//varias vezes e introduzindo comentarios. Use o comando \7 \a \b \r \t \v \\ \' \"" \? %% e descubra
//a funcao de cada um deles.Produza propositalmente alguns erros de sintaxe observe a resposta do compilador
//Por exemplo execute o codigo:
#include "cstdio"

int main(){

    printf("\t matematica \v e \n \t computação \n \t cientifica\n");
//    printf("\7\7\7");
//    printf("\a\a\a");
//    printf("\b\b\b");
//    printf("\n\n\n");
//    printf("\r\r\r");
//    printf("\t\t\t");
//    printf("\v\v\v");
//    printf("\\\\\\");
//    printf("\'\'\'");
//    printf("\"\"\"");
//    printf("\?\?\?");
//    printf("%%%%%%");
    printf("\v \"linguagem\" \v programação \n programa\n");

    return 0;
}

//#include <cstdio>
//
//int main() {
//    // Declaração de variáveis
//    int a;
//    double b;
//    char c[50]; // Agora é uma string (array de caracteres)
//
//    // Leitura dos dados
//    printf("Digite um numero inteiro: ");
//    scanf("%d", &a);
//    printf("Digite um numero real: "); // Mensagem corrigida
//    scanf("%lf", &b); // Formato correto para ler double
//    printf("Digite uma palavra: ");
//    scanf("%s", c); // Formato e variável corretos para ler string
//
//    // Impressão dos resultados com os formatos corretos
//    printf("\n--- Resultados ---\n");
//    printf("O numero digitado inteiro é: %d\n", a);
//    printf("O numero octal do inteiro é: %o\n", a); // Imprimindo 'a' em octal
//    printf("O numero hexadecimal do inteiro é: %x\n", a); // Imprimindo 'a' em hexadecimal
//    printf("O numero real digitado é: %f\n", b); // Imprimindo 'b' como float
//    printf("O numero real em notacao cientifica é: %e\n", b); // Imprimindo 'b' em notação científica
//    printf("A palavra digitada é: %s\n", c); // Imprimindo a string 'c'
//    printf("------------------\n");
//
//    return 0;
//}
