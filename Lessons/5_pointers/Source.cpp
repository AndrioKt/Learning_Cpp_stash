

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;

/*
int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 5;
	cout << "a\t" << a << endl;
	int *px = &a;// * -  ��� ��������� ������, ������������� � ���������� px. ��������� & - ������������ ��� �������� ������ ������.
// (������� �������� ���� � ���������� ��������� "p")
	//� ������ ������ ������� ����� ���������� �, � ������ � ���������� � px
	int* px2 = &a;
	*px2 = 2;// ����� ������������ ������ ������� ������ ������ �� ������� ���� ��������� *px

	cout << "a\t" << a << endl;
	cout << "px\t" << *px << endl; // ��� ������ �������� �������� "*" �������� ��� ������������� (�������������� �������� �� ������ ������)
	return 0;
} */
int main()
{
	setlocale(LC_ALL, "Russian");

	const int SIZE = 5;
	int arr[SIZE]{ 5,55,32,1,21 };// ������� ���������� ������� ��� �� �������� ���������� �� ��� 1 �������
	for (int i = 0; i < SIZE; i++) 
	{
		cout << arr[i] << endl;
	}
	cout << "---------------------------" << endl;

	int* parr = arr;// ��������� � ������ ���� � �� ��
	for (int i = 0; i < SIZE; i++)
	{
		cout << parr[i] <<" parr[i] ���� ��� � *(parr+i) "<<*(parr+i)<< endl;//���� 
	}
	return 0;
}
