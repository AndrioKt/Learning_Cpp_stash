// ��: �������� �������� � � � ������� ��������� � ��������

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;

int main()
{	srand(time(NULL));
	/*
	int* pa = new int;// ���������� ������������ ������ ��� ��������� pa
	*pa = 10;
	cout << *pa << endl;
	delete pa;//�������� ������������ ������, ���������� ��� pa

	pa = NULL;//��������� ���������� ������ � (pa) ����� ��� ������ int
	// pa = nullptr   - ���������� �� NULL ���, ��� ����� ���� ������ ��� ������ (�������� �������� ����������)
	cout << pa << endl;
	*/

	int size = 0; // � ������������ ������� �� ����������� ������������ ����� const
	cout << "enter array size" << endl;
	cin >> size;
	int* arr = new int[size]; // ��������� �� ������������ ������ ������ ��������� ������ ������������� �������
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand()%10;
	}
		for (int i = 0; i < size; i++)
{
	cout << arr[i] << "\t";// ��������� �������� ����� �������
	cout << arr + i << endl; // ���������� ������ ����� �������
}
	delete [] arr; //��� �������� � ������� ��������� ������� ���������� ������ ����� ����� delete ��� �������� ������� �������



	return 0;
}
