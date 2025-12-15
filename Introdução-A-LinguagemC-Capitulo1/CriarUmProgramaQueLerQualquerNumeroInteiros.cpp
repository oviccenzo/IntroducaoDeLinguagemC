//
// Created by Robert L Resende on 19/06/25.
//
#include "cstdio"

int main(){

    int a,b,c,d,soma;
    printf("Digite um numero a: ");
    scanf("%d",&a);
    printf("Digite um numero b: ");
    scanf("%d",&b);
    printf("Digite um numero c: ");
    scanf("%d",&c);
    printf("Digite um numero d: ");
    scanf("%d",&d);

    soma = a + b + c + d;

    printf("O resultado dos quatros numero é: %d\n",soma);

    if(a < b || a < c || a < d){
        printf("O numero menor é: %d\n",a);
    } else if(b > a || b > c || b > d){
        printf("O numero maior é: %d\n",b);
    } else{
        printf("Os numeros são iguais");
    }
}