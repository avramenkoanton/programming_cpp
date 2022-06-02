#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
int mas[] = {2,10,3,4,9};
    int N = 5;
    double a;
    printf("a=");
    scanf("%lf", &a);

    int count = 0;
    for (int i = 0; i < N; i++) 
    {
        if (mas[i] < a) count++;
    }
    printf("K=%d", count);
}