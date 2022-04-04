#include<stdio.h>
#include<math.h>
int main()
{
    float x, y;
	int n;
	printf("x=");
	scanf("%f", &x);
	printf("n=");
    scanf("%d", &n);
	y = x;
	for (int i = 1; i <= n; i++)
	{
		y = sin(y);
	}
	printf("y=%f", y);
}
