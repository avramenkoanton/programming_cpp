#include <stdio.h>
#include <math.h>
int main() {
float a=2.12, b=-3.4, c=2.56;
	a = fabs(a);
	b = fabs(b);
	c = fabs(c);
	float f_min = a, f_max = b;
	if (b < a) {
		f_min = b;
		f_max = a;
	}
	if (f_min > c) {
		f_min = c;
	}
	if (f_max < c) {
		f_max = c;
	}
	printf("max = %f, min = %f", f_max, f_min);
}