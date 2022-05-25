#include<stdio.h>
#include<math.h>
int main()
{
    double i = -1, sum = 0, prod = 1;
	int n = 0;
	while (i != 0)
	{
		printf("a[%d]=", n);
		scanf("%lf", &i);
		sum += i;
		if (i != 0)
		{
			prod *= i;
		}
		n++;
	}
	printf("Arithmetic mean = %g\n", sum / (n-1));
    printf("Geometric mean = %g\n", pow(prod, 1.0 / (n-1)));
}