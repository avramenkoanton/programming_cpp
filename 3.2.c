#include <stdio.h>
int main() {
int x;
	printf("x= ");
	scanf("%i", &x);
	int a = x / 100;
	int b = x / 10 - a * 10;
	int c = x - a * 100 - b * 10;
	if (a != b && c != b && a != c){
		printf("%i%i%i\n", a, b, c);
		printf("%i%i%i\n", a, c, b);
		printf("%i%i%i\n", b, a, c);
		printf("%i%i%i\n", b, c, a);
		printf("%i%i%i\n", c, a, b);
		printf("%i%i%i\n", c, b, a);
	}
	else
		printf("не всі цифри різні");
}