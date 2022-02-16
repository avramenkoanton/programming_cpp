#include <stdio.h>
#include <math.h>

double length(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2 - x1), 2) + (pow((y2 - y1), 2)));

}

double square(double a, double b, double c)
{

    return sqrt(((a + b + c) / 2) * (((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c));

}

int main()
{
    double xa, ya;
    printf("A(x; y) = ");
    scanf("%lf %lf", &xa, &ya);

    double xb, yb;
    printf("\nB(x; y) = ");
    scanf("%lf %lf", &xb, &yb);

    double xc, yc;
    printf("\nC(x; y) = ");
    scanf("%lf %lf", &xc, &yc);

    double AB = length(xa, ya, xb, yb);
    double BC = length(xb, yb, xc, yc);
    double CA = length(xc, yc, xa, ya);
    double ABC = square(AB, BC, CA);

    printf("\nArea = %lf", ABC);
}
