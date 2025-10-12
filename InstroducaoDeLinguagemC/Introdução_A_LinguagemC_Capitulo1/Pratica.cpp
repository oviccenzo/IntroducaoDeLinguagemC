//
// Created by Robert L Resende on 19/06/25.
//
#include "cstdio"

int main(){

//    int soma,a,b,c,d,e;
//    printf("Digite seis numeros inteiros: \n");
//    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    float soma,a,b,c,d,e,f;
    printf("Digite seis numeros inteiros com ponto flutuante: \n");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);

//    double soma2,A,B,C,D,E;
//    printf("Digite seis numeros inteiros: \n");
//    scanf("%lf %lf %lf %lf %lf",&A,&B,&C,&D,&E);

//    soma = a + b + c + d + e;
    soma = a + b + c + d + e + f;
//    soma2 = A + B + C + D + E;

    printf("O resultado dos seis numeros é: %.1f\n",soma);
//    printf("O resultado dos seis numeros é: %f\n",soma);
//    printf("O resultado dos seis numeros é: %lf\n",soma);
}