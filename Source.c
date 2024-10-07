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
	printf("������� ���: ");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("��� %d ����������\n", year);
	}
	else {
		printf("��� %d �� ����������\n", year);
	}
	return 0;
}
int task2() {
	double x, F;

	printf("������� �������� x: ");
	scanf("%lf", &x);

	// ����������� ������ ��� x = 2: 
	// F(2) = -2^2 + 3*2 + 9 = 11
	// ����������� ������ ��� x = 4: 
	// F(4) = 4 / (4^2 + 1) = 4/17

	F = (x <= 3) ? (-x * x + 3 * x + 9) : (x / (x * x + 1));

	printf("F(%.2lf) = %.4lf\n", x, F);

	return 0;
}
int task3() {
	int num, ed, des;

	printf("������� ���������� �����: ");
	scanf("%d", &num);

	ed = num % 10;
	des = (num / 10) % 10;

	if (ed == des) {
		printf("����� ������ � �������� �����\n");
	}
	else {
		printf("����� ������ � �������� �� �����\n");
	}

	return 0;
}
