// ��������� ��������� ���������� �����

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));//������ ����������� ��������� �� ������� time (�������� srand ������ ����� ������, � ������ � ��������� ������ ����� ������)

	int const SIZE = 10;
	int arr[SIZE]{};
	bool povt;
	
	for (int i(0); i < SIZE;)
	{
		povt = false;
		int newval = rand() % 20;

		for (int j(0); j < i; j++)//������ �������� ���������� ��������
		{
			if (arr[j] == newval)
			{
				povt = true;
				break;
			}
		}
			if (!povt) //������� � ������� ���� ���������� false(�� ��������� �� false = true)
			{
				arr[i] = newval;// ������ ����� �������� ��� ������������� ����������
				i++;
			}
	}
	int min = arr[0];//���������� ������������ ��������
	for (int i(1); i < SIZE; i++) // ������ ������ ������������ ��������
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	for (int i(0); i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "min value: " << min << endl;
	(void)_getch();
	return 0;
}