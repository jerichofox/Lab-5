#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "RUS");

	double x, y;
	double res1, res2, res3, res4, res5, res6, res7, res8;
	int a,b,c, condition1, condition2;

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

	a = (int)fabs(x);
	b = (int)fabs(y);
	c = (int)fabs(res8);
	condition1 = ((a % 2 == 0) && (b % 2 == 1)) || ((a % 2 == 1) && (b % 2 == 0));
	condition2 = (a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0);
	printf("Условие 1 выполнено (1 - да, 0 - нет): %d\n", condition1);
	printf("Условие 2 выполнено (1 - да, 0 - нет): %d\n", condition2);
	
	return 0;
}