#include <stdio.h>

int main() {
double a, b, c;
	int input = scanf("A=%lf, B=%lf, C=%lf", &a, &b, &c);
	double arithmetic = (a + b + c) / 3;
	double harmonic = 3.0/(1/a+1/b+1/c);
	printf("arithmetic=%lf, harmonic=%lf", arithmetic, harmonic);
}