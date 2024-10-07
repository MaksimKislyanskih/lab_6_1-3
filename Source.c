#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
int task1();
int task2();
int task3();
void main() {
	setlocale(LC_CTYPE, "RUS");
	//task1();
	//task2();
	//task3();
}
int task1() {
	int year;
	printf("Введите год: ");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("Год %d високосный\n", year);
	}
	else {
		printf("Год %d не високосный\n", year);
	}
	return 0;
}
int task2() {
	double x, F;

	printf("Введите значение x: ");
	scanf("%lf", &x);

	// Контрольный пример для x = 2: 
	// F(2) = -2^2 + 3*2 + 9 = 11
	// Контрольный пример для x = 4: 
	// F(4) = 4 / (4^2 + 1) = 4/17

	F = (x <= 3) ? (-x * x + 3 * x + 9) : (x / (x * x + 1));

	printf("F(%.2lf) = %.4lf\n", x, F);

	return 0;
}
int task3() {
	int num, ed, des;

	printf("Введите трёхзначное число: ");
	scanf("%d", &num);

	ed = num % 10;
	des = (num / 10) % 10;

	if (ed == des) {
		printf("Число единиц и десятков равно\n");
	}
	else {
		printf("Число единиц и десятков не равно\n");
	}

	return 0;
}
