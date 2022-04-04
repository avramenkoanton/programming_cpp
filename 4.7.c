#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float x, y=1,k=1;
	scanf("%f %d", &x, &n);
	if (n < 0 || fabs(x)>=1)
	printf("input does not meet the requirements");
    else
    {	for (int i = 1; i <= n; i++)
        {
		    k = k * i;
		    y = y + pow(x, i) / k;
	    }
	    printf("y=%f", y);
    }
}