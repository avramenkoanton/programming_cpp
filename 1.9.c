#include <stdio.h>

int main()
{
	double a, b, arith, harm;
	scanf("%lf %lf", &a, &b);
	arith = (a+b)/2.0f;
	harm = 2.0f/((1.0f/a)+(1.0f/b));
	printf("Арифметичний формат:\n Арифметичне = %lf\n Гармонійне = %lf\n\n\n", arith, harm);
	printf("Науковий формат:\n Арифметичне = %e\n Гармонійне = %e", arith, harm);
	return 0;
}