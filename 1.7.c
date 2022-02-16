#include <stdio.h>
#include <math.h>

int main()
{
	double num, fractpart;
	int intpart, smaller, bigger, rounded;

	scanf("%lf", &num);
	intpart = (int)num;
	fractpart = num - (float)intpart;
	smaller = (int)num;
	bigger = (int)num + 1;
	rounded = roundf(num);

	printf("ціла частина = %d\n", intpart);
	printf("дробова частина = %f\n", fractpart);
	printf("найбільше ціле, не більше заданого = %d\n", smaller);
	printf("найменше ціле, більше заданого = %d\n", bigger); 
	printf("округлене = %d\n\n",rounded);

	return 0;
} 