#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");

	double x, y;

	double x1 = 1.9;
	double y1 = -1;

	double x2 = 1.6;
	double y2 = -2.3e-6;

	double res1, res2, res3, res4, res5, res6, res7, res8;

	res1 = pow(cos(x1), 2);
	res2 = sqrt(1 + res1);
	res3 = log(res2);
	res4 = 2.33 * res3;
	res5 = exp(y1);
	res6 = pow(sin(x1), 2);
	res7 = res5 + res6;
	res8 = res4 / res7;
	printf("Проверка: при x = 1,9 и y = -1 F(x,y) = %.6f\n", res8);

	res1 = pow(cos(x2), 2);
	res2 = sqrt(1 + res1);
	res3 = log(res2);
	res4 = 2.33 * res3;
	res5 = exp(y2);
	res6 = pow(sin(x2), 2);
	res7 = res5 + res6;
	res8 = res4 / res7;
	printf("Проверка: при x = 1,6 и y = -2,3e-06 F(x,y) = %1.2e\n\n", res8);

	printf("Введите значения x и y: \n");
	scanf("%lg %lg", &x, &y);
	res1 = pow(cos(x), 2);
	res2 = sqrt(1 + res1);
	res3 = log(res2);
	res4 = 2.33 * res3;
	res5 = exp(y);
	res6 = pow(sin(x), 2);
	res7 = res5 + res6;
	res8 = res4 / res7;
	printf("При x = %g и y = %g F(x,y) = %.5g\n", x, y, res8);

	return 0;
}