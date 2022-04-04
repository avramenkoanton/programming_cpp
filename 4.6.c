#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float k1 = 0, k2=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		k1 = sqrt(2 + k1);
	}
	for (int i = n; i >=1; i--)
	{
		k2 = sqrt(3*i + k2);
	}
	printf("a) %f\n", k1);
	printf("b) %f", k2);
} 