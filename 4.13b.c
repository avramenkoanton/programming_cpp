#include<stdio.h>
#include<math.h>
int main()
{
	double x,y=1;
	int n;
	printf("x=");
	scanf("%lf",&x);
	printf("n=");
	scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
	    y = y + 1/pow(x*x+1,i);
	}
	printf("y=%lf\n", y);
}