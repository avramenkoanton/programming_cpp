#include <stdio.h>
#include <math.h>

double area(double x, double y, double z) {
    double p = (x + y + z) / z;
    return sqrt(p * (p - x) * (p - y) * (p - z));


}

int main()
{    
    double a, b, c;
    printf("a, b, c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    double s = area(a, b, c);
    printf("S = %lf", s);
}