#include <stdio.h>
double f1(int n) 
{
	double p = 1.0;
	double d = 1.0;
	for (int i = 1; i <= n; i++) 
	{
		d /= i;
		p *= (1 + d);
	}
	return p;
}
double f2(int n) 
{
	int k = -1;
	double p1 = 1.0;
	double d = 1.0; 
	for (int i = 1; i <= n; i++) 
	{
		d /= 2;
		k = -k;
		p1 *= (1 + k * i * i * d);
	}

	return p1;
}
int main() 
{
	int n;
	printf("n=");
	scanf("%d", &n);
	printf("a) p_%d=%lf\n", n, f1(n));
	printf("b) p_%d=%lf", n, f2(n));
} 