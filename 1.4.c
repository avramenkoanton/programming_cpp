#include <stdio.h>
#include <math.h>

int main()
{
    double m1, m2, G, r, f;
    scanf("%lf", &m1);
    scanf("%lf", &m2);
    scanf("%lf", &G);
    scanf("%lf", &r);
    f = r * ((m1 * m2) / (G * G));
    printf("f = %lf \n f = %le", f, f);
    
}