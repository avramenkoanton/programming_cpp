#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("x = ");
    scanf("%lf", &x);
    x = cos(x);
    printf("cos(x) = %lf", x);
}