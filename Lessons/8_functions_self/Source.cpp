#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

double Calc(double a, double b, double(*oper)(double, double))//����� ������ ��������� �� ������� (*oper) - ��� ����� ����� ����� ������� � ������ � *
{

	return oper(a, b);//����������� ���������� ������� �� ������� ��������� (��� ���� �� �� ����������� ��������������)
}

double sim(double a, double b)
{
	return a + b;
}
double mult(double a, double b)
{
	return a * b;
}


int sum(const int p[][1], int len)//������ ����� ���������� ����� ������� (�������� ������� � ��� �����). ���� ������ �� ����� �������� �� ������� const (��������� ������� ����������������)
{ //� ��������� ������� ������ ����� ��������� 1 �� ������������ (���-�� ����� ��� ��������)
	int sum = 0;
	for (int i(0); i < len; i++)
	{
		sum += p[i][0];
	}
	return sum;
}
int main()
{
	// int a[10][1] = { 1,2,3,4,5,6,7,8,9,10 };
	//cout <<  sum(a,10);

	cout << Calc(12.3, 11.4, sim) << endl;// ����� ������� 1 �� ���������� ������ �������� �������� �������
	cout << Calc(12.3, 11.4, mult) << endl;
	return 0;
}