#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double pluss(double a, double b)
{
	return a + b;
}

double minuss(double a, double b)
{
	return a - b;
}

double umnoj(double a, double b)
{
	return a * b;
}

double delenie(double a, double b)
{
	if (b == 0) {
		cout << "На ноль делить нельзя!\n";
		return 0;
	}
	return a / b;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b;
	cout << "Введите значение a:";
	cin >> a;
	cout << "Введите значение b:";
	cin >> b;
	cout << "\n";
	cout << "Сумма этих чисел=" << pluss(a, b) << "\n";
	cout << "Умножение этих чисел=" << umnoj(a, b) << "\n";
	cout << "Разность этих чисел=" << minuss(a, b) << "\n";
	cout << "Деление этих чисел=" << delenie(a, b) << "\n";
	return 0;
}



