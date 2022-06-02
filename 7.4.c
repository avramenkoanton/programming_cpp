#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define N 5
int max(int m[N]) 
{
    int f = 0;
    for (int i = 0; i < N; i++) {
        printf("%d,", m[i]);
        if (m[i] > f) {
            f = m[i];
        }
    }
    printf("]");
    return f;
}
int main()
{
    int mas[N];

    for (int i = 0; i < N; i++) {
        printf("mas[%d] = ", i);
        scanf("%d", &mas[i]);
    }
    printf("[");
    printf("\nmax: %d", max(mas));
}
