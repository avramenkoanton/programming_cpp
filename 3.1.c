#include <stdio.h>
int main() {
	int x = 123;
	int a = x / 100;
	int b = x / 10 - a*10;
	int c = x - a * 100 - b * 10;
	printf("a) %i: сотні: %i, десятки: %i, одиниці: %i\n",x, a, b, c);
	printf("б)сумма цифр: %i\n",a+b+c);
	printf("в)читання справа наліво:%i%i%i", c, b, a);
}