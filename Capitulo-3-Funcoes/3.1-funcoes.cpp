//
// Created by Robert L Resende on 15/12/25.
//
#include <csmath>
#include <cstdio>

int main(){
	double x = 1e2,y;
	y = 1 + 1/x;
	y = pow(y,x);
	printf("(1+1/%e)ˆ%e = %f \n",x,x,y);

	x = 1e6;
	y = 1 + 1 /x;
	y = pow(y,x);
	printf("(1+1/%e)ˆe% = %f\n",x,x,y);

	x = 1e10;
	y = 1 + 1 / x;
	y = pow(y,x);
	printf("(1+1/%e) ˆ e% = %f\n",x,x,y);

	return 0;
}
