#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float x, y, a=0, b=1;
	printf("x=");
	scanf("%f", &x);
    printf("n=");
    scanf("%d", &n);
    printf("y=");
	scanf("%f", &y);
	for (int i = 0; i <= n; i++)
	{
		a = a + pow(x, i);
	}
	for (int i = 1; i <= n; i++)
	{
		b = b + pow(x, pow(2,i))*pow(y,i);
	}
	printf("a) (x,n)=%f\n", a);
	printf("b) (x,y,n)=%f\n", b);
}