

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	int r = 4;
	int c = 5;
	int** arr=new int *[r];// ��� * ��������, ��� ��������� ����� ������� ��������� �� ���������

	for (int i = 0; i < r; i++)
	{
		arr[i] = new int[c];//��� ������� ������ ���������� ������, ��� ������������� � �� ������������
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
		cout << arr[i][j]<< "\t" ;
		}
		cout << endl;
	}



	for (int i = 0; i < r; i++)
	{
		delete[] arr[i];// ������� �� �� ������ ��� ������������� ���������� �������
	}

	delete[] arr;// ����� ������� �������� ������ ����������
	return 0;
}
