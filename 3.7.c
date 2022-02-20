#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    printf("Введіть a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a==0){
        if(b == 0){
            if(c == 0){
                printf("x - будь-яке число");
            }
            else
            {
                printf("Коренів немає");
            }
        }
        else
        {
            printf ("x = %g", -c/b);
        }
    }
    else
    {
        float d, x1, x2;
        d = b * b - 4 * a * c;
        if(d < 0)
        {
            printf("Коренів немає");
        }
        else
        {
            if(d == 0)
            {
                printf("x= %g", -b/(2*a));
            }
            else
            {
                printf("x1= %g, x2= %g",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
            }
        }
    }
    return 0;
}