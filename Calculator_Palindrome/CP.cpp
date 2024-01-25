#include <iostream>
using namespace std;
#define CALCULATOR
#define PALINDROME

int main()
{
	setlocale(LC_ALL, "ru");
#ifdef CALCULATOR
	cout << "\t�����������" << endl;
	int N1, N2;
	char sign;
	cout << "������� ������ ��������: "; cin >> N1;
	cout << "������� ������ ��������: "; cin >> N2;
	cout << "�������� �������� ��� ���������� ('+', '-', '/', '%', '*'): "; cin >> sign;
	cout << "���������: ";
	if (sign == '+') cout << N1 + N2 << endl;
	if (sign == '-') cout << N1 - N2 << endl;
	if (sign == '/') cout << N1 / N2 << endl;
	if (sign == '%') cout << N1 % N2 << endl;
	if (sign == '*') cout << N1 * N2 << endl;
#endif

#ifdef PALINDROME
	int num;
	cout << "������� �����: "; cin >> num;
	if (num <= 0) {
		cout << "��� ����� ������ ������������� �����" << endl;
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
		cout << num << " - ��� ����� ���������" << endl;
	else
		cout << num << " - ��� ����� �� ���������" << endl;
#endif
}