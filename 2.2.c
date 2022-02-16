#include <stdio.h>
#include <math.h>

int main() 
{

	double a, b, c;
	printf("a=");
	scanf("%lf", &a);
	printf("b=");
	scanf("%lf", &b);
	c = hypot(a, b);
    printf("c = %0.2f\n", c);

}