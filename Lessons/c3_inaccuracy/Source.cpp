#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// �� ���������� ����������� � ������������� �����������
double Abs(double a)
{
	return abs(a);
}
double abs_inaccuracy(double a, double b)
{
	return abs(a - b);
}
double relativ_inaccurecy(double a, double b)
{
	return (double((abs_inaccuracy(a, b)) / b) * 100);

}
int main()
{	setlocale(LC_ALL, "ru");
mark:
	double a, b;
	cin >> a >> b;
	relativ_inaccurecy(a, b);
	cout << "���������� ����������� " << abs_inaccuracy(a,b) << endl;
	cout << "������������� ����������� " << relativ_inaccurecy(a, b) << " %"<< endl;
	goto mark;
	return 0;
}