//
// Created by Robert L Resende on 15/12/25.
//
#include <cstdio>

int main(){
	float x,y;
	printf("Entre com o valor de x\n");
	scanf("%f",&x);
	printf("Entre com o valor de y\n");
	scanf("%f",&y);
	if(x >= y)
		printf("x é maior ou igual a y\n");
	else
		printf("x menor que y\n");
}