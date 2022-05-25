#include<stdio.h>
#include<math.h>
int main()
{
	int n,f1=1,f2=1,i=2,s=1;
	double a;
	printf("n=");
	scanf("%d", &n);
	printf("a=");
	scanf("%lf", &a);
	if (n == 0)
	{
		printf("F_0 =%d\n", 0);
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			int x = f1;
			f1 = f2;
			f2 = x + f2;
		}
		printf("a) F_%d = %d\n", n, f2);
	}
	f1 = 1;
	f2 = 1;
	while (f2 <= a)
	{
		int x = f1;
		f1 = f2;
		f2 = x + f2;
		i = i + 1;
	}
	printf("b) Number of the biggest element of the Fibonacci sequence lesser than a=%f is %d\n", a, i-1);
	printf("c) Number of the smallest element of the Fibonacci sequence bigger than a=%f is %d\n", a, i);
	f1 = 1;
	f2 = 1;
	while(f2<1000)
	{
		s = s + f2;
		int x = f1;
		f1 = f2;
		f2 = x + f2;
	}
	printf("d) Sum of all elements of the Fibonacci sequence lesser than 1000 is%d", s);
} 