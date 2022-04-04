#include<stdio.h>
int main()
{
	int m, n=1,k=0;
	scanf("%d", &m);
	if (m < 1)
	printf("incorrect input");
    else
	{   while (n <= m)
	    {
		    n = n * 4;
		    k = k + 1;
	    }
	    printf("k=%d", k - 1);
	}
} 