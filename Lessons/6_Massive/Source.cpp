#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::pow;
using std::ios_base;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int A[N];// []-����������� �������(�������)
	//cout << sizeof(A) << endl; �������� ���������� ���� �������
	//A[0] = 100;���������� �������� �������� �������(���������� �������) - �� ������, ������ ���������� ����
	//����� ���������� ������ ���������
	/*
	for (int i = 0; i < N; i++) //� ����� ����� �������� ������ � ��� ����� � ����������
	{
		A[i] = i + 1; 
		cout << "A[" << i << "] = " << A[i] << endl;
	}
	*/
	/*
	int arr[3][2] = { {23,34}, {1,2}, {5,7} }; // ��������� ������ (�������)
	for (int i=0; i<3; i++)
		for (int j = 0; j < 2; j++)
		{
			cout << " " << arr[i][j]
		}
		cout << endl;
		*/
	cout << "���������� �������: \n";
	for (int i = 0; i < 10; i++)//������ ������� ����� ������� ��� �������� �������
	{
		cout << "������� �������� " << i << "�������� �������: ";
		while (!(cin >> A[i]))//������� ���� ���� �� ���������
		{
			cin.clear();
			while (cin.get() != '\n');
				cout << "������� �������� " << i << "�������� �������: ";
		}
	}
	system("cls");
	cout << "�������� ������: \n";
	for (int i = 0; i < 10; i++)
		cout << "A[" << i << "] = " << A[i] << endl;

	int Max = A[0], Min = A[0];
	for (int i = 0; i < 10; i++)// ���������� ������������� � ������������ �������� �������
	{
		if (Max < A[i])
			Max = A[i];
		if (Min > A[i]);
			Min = A[i];
	}
	cout << "Max: " << Max << endl;
	cout << "Min: " << Min << endl;

	(void)_getch();
	return 0;
}