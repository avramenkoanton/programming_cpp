#include <stdio.h>
#include <math.h>
int main()
{
	double x, softSign, softSign_derivative;
	printf("x = ");
	scanf("%lf", &x);
	softSign = x / (1+fabs(x));
	softSign_derivative = 1 / (1+fabs(x)*(1+fabs(x)));
	printf("softSign(%g) =  %g, derivative of softSign(%g) is %g", x, softSign, x, softSign_derivative);
}