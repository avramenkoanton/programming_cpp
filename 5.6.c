#include <stdio.h>
double b_n(double b, long long int n) 
{
    double res = b;
    for (long long int i = 0; i < n; ++i)
    {
        res = b + 1 / res;
    }

    return res;
}
double lambda_n(long long int n) {
    double res = 4.0*n+2;
    for (long long int i = n-1; i >-1; i--) {
        res = 4*i+2 + 1 / res;
    }

    return res;
}
int main() {
    long long int n;
    printf("n=");
    scanf("%I64lld", &n);
    double b;
    printf("b=");
    scanf("%lf", &b);
    printf("a)b_n=%lf\n", b_n(b, n));
    printf("b)l_n=%lf\n", lambda_n(n));
} 