#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846

void main() 
{
	setlocale(LC_ALL, "Rus");

	float gr;

	puts("Программа вычисления синуса");
	puts("Введите градус:");
	scanf("%f", &gr);
	printf("Результат: синус %.1f град = %lf\n\n", gr, sin(gr * M_PI / 180));	
	
	printf("Проверка:\n");
	printf("синус 30 град = % lf\n", sin(30 * M_PI / 180));
	printf("синус 60 град = % lf\n", sin(60 * M_PI / 180));
	printf("синус 90 град = % lf\n", sin(90 * M_PI / 180));

	return 0;
}