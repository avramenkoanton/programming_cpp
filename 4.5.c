#include<stdio.h>
int main()
{
	int n, x=1;
	scanf("%d", &n);
	for (int i = n; i > 0; i = i - 2)
	{
		x = x * i;
	}
	printf("n!!=%d", x);
} 