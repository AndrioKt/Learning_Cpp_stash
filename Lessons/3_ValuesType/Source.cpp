#include <conio.h>
#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;


int main()
{
	setlocale(LC_ALL, "Russian");

	int a,b; // 4 �����
	double f;//8 ���� ������������ �����
	char c = 33;// 1 ���� (���� ����������� ���������� ����� ��� ������� ����� �������� � ������������ � �������� Ascii)
	a = 23;
	b = 12;

	cout << "c= " << c << endl;
	cout << "a= " << a << "b = " << b << endl;
	cout << "a + b = " << a	+ b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;// ��� ������� ������������� �������� ����� ������ ����� ����� ��� �������
	cout << "a % b = " << a % b << endl;// ������� � �������� (a%b= a-b*(a/b �������������))
	/*
	short b; // 2 �����
	long c; // 4 �����
	*/

	(void)_getch();
	return 0;
}