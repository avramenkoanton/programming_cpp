#include<stdio.h>
int main()
{
	int n, r = 0, k = 1;
	scanf("%d", &n);
	while (k <= n)
	{
		k = k * 2;
		r = r + 1;
	}
	printf("r=%d", r);
	printf("\n2^r=%d", k);
} 