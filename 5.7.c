#include<stdio.h>
int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    double a1 = 0, a2 = 1, b1 = 1, b2 = 0, bk, ak, sum = 0, s=2;
    sum += s / (a1 + b1);
    s = s * 2;
    sum += s / (a2 + b2);
    s = s * 2;
    for (int k = 3; k <= n; k++)
    {
        bk = b2 + a2;
        ak = a2 / k + a1 * bk;
        sum += s / (ak+ bk);
        a2 = a1;
        a1 = ak;
        b2 = b1;
        b1 = bk;
        s = s * 2;
    }
    printf("S_%d = %lf", n, sum);
} 