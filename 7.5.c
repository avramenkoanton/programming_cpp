#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define N 50
int count(int m[N]) {
    int even = 0;
    int odd = 0;
    for (int i = 0; i < N; i++) {
        if (m[i] % 2 != 0) {
            odd++;
        }
        else even++;
        if (m[i] == 0) {
            even--;
            break;
        }
    }
    printf("odd: %d,even: %d\n", odd, even);
    return 1;
}
int main()
{
    int mas[N];
    for (int i = 0; i < N; i++)
    {
        printf("mas[%d] = ", i);
        scanf("%d", &mas[i]);
        if (mas[i] == 0)
        {
            break;
        }
    }
    count(mas);
}