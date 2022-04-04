#include<stdio.h>
int main()
{
	int n,a=1,b=1;
	printf("n=");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		a = a * i;
	}
	for (int i = n; i >=1; i--)
	{
		b = b * i;
	}
	printf("a) n!=%d\n", a);
	printf("b) n!=%d\n", b);
} 