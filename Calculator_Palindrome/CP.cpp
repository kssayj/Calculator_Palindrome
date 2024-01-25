#include <iostream>
using namespace std;
#define CALCULATOR
#define PALINDROME

int main()
{
	setlocale(LC_ALL, "ru");
#ifdef CALCULATOR
	cout << "\tКалькулятор" << endl;
	int N1, N2;
	char sign;
	cout << "Введите первое значение: "; cin >> N1;
	cout << "Введите второе значение: "; cin >> N2;
	cout << "Выберите действие над значениями ('+', '-', '/', '%', '*'): "; cin >> sign;
	cout << "Результат: ";
	if (sign == '+') cout << N1 + N2 << endl;
	if (sign == '-') cout << N1 - N2 << endl;
	if (sign == '/') cout << N1 / N2 << endl;
	if (sign == '%') cout << N1 % N2 << endl;
	if (sign == '*') cout << N1 * N2 << endl;
#endif

#ifdef PALINDROME
	int num;
	cout << "Введите число: "; cin >> num;
	if (num <= 0) {
		cout << "Вам нужно ввести положительное число" << endl;
		return 0;
	}
	int a = num, rev_num = 0, b;
	while (a != 0)
	{
		b = a % 10;
		rev_num = rev_num * 10 + b;
		a /= 10;
	}
	if (num == rev_num)
		cout << num << " - это число палиндром" << endl;
	else
		cout << num << " - это число не палиндром" << endl;
#endif
}