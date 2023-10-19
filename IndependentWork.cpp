#include <stdio.h> 
#include <math.h>
#include <windows.h> 

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y, a, b, c, d;
	printf("x=");
	scanf_s("%lf", &x);
	printf("y=");
	scanf_s("%lf", &y);
	a = y <= -2 * x + 4;
	b = y >= 0;
	c = x >= 0;
	d = (x + 6) * (x + 6) + ((y - 8) * (y - 8)) <= 9;
	if (y >= pow(e, x) && x * x + y * y <= 16) || (y <= pow(e, x) && x * x + y * y >= 16 && pow(y - 6, 2) + pow(x - 2, 2) <= 16) {
		printf("false");
	}
	else {
		printf("true");
	}
	return 0;
}