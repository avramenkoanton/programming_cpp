#include <stdio.h>
#include <math.h>
#define pi 3.141592
int main()
{
	double a, b, c, R, val, a1, b1, s;
	printf("a, b, c, R = ");
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &R);
	if ( a+b+c < 180 )
        printf("sum of angles must be equal to 180");
    else
    {
	val=pi/180;
	a1 = sin(a*val) * 2 * R;
	b1 = sin(b*val) * 2 * R;
	printf ("a = %lf, b = %lf", a1, b1);
	s = 0.5 * a1 * b1 * sin(c*val);
	printf("\nArea of a triangle is %lf", s);
    }
}
