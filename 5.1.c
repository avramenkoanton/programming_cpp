#include<stdio.h>
int main()
{
	double a, s = 1;
	int n = 2;
	scanf("%lf", &a);
	while (a >= s)
	{
		s = s + 1.0 / n;
		n = n + 1;
	}
	printf("a=%lf\n", s);
	printf("n=%d", n-1);
} 