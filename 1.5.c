#include<stdio.h>

int main()
{
	float x, x2, x4, x6, x9, x15;
	printf("x=");
	scanf("%f", &x);
	x2 = x*x;
	x4 = x2*x2;
	x6 = x2*x4;
	x9 = x4*x4*x;
	x15 = x4*x4*x4*x2*x;
	printf("x^4=%f\n", x4);
	printf("x^6=%f\n", x6);
	printf("x^9=%f\n", x9);
	printf("x^15=%f\n", x15);
}