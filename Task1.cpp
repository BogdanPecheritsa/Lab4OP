#include <stdio.h> 
#include <math.h>
#include <windows.h> 

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c, x, d, x0 = 0;
	printf("а=");
	scanf_s("%lf", &a);
	printf("b=");
	scanf_s("%lf", &b);
	printf("c=");
	scanf_s("%lf", &c);
	d = (b * b) - (4 * a * c);
	if (a == 0) {
		x = -c / b;
	}
	else {
		if (d == 0) {
			x = -b / (2 * a);
		}
		else if (d > 0) {
			x = (-b + pow(d, 1. / 2)) / (2 * a);
			x0 = (-b - pow(d, 1. / 2)) / (2 * a);
		}
		else {
			printf("розв'язків немає");
			return 0;
		}
	}
	if (x0 == 0) {
		printf("х = %lf", x);
	}
	else printf("x1=%lf,x2=%lf", x, x0);

	return 0;
}