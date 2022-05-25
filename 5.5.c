#include <stdio.h>
int main() 
{
	int n = 3;
	int x, x1, x2, x3;
	x1 = x2 = x3 = -99;
	while (x3 < 0)
	{
		x = x1 + x3 + 100;
		printf("x_%d=%d\n", n + 1, x);
		x1 = x2;
		x2 = x3;
		x3 = x;
		n++;
	}
	printf("Smallest positive number of the sequence is x_%d=%d", n, x3);
}