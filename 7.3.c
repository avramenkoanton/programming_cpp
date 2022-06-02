#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define N 10
double func(double m[N]) {
    double sum = 0;
    for (int i = 0; i < N; i++) {
        if (m[i] > M_E) {
            sum += m[i];
        }
    }
    return sum;
}
int main()
{
    double mas[N];

    for (int i = 0; i < N; i++) {
        printf("mas[%d] = ", i);
        scanf("%lf", &mas[i]);
    }
    printf("result =  %lf", func(mas));
}
