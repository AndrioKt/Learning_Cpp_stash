// ������������ �������/������� ���������� ��������/ ����������� ��������

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;

void FillArr(int* const arr, const int size)//������� ���������� �������. const ����� ��� ��������, � ��� �� ���������� ��������� ������ 
//�������� ��������� � ������� (��� ������ ����� ������������ ����� ���������/��������� ���������� ��������))
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArr(int* const arr, const int size)//������� ����������� �������
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

//firstArr = secondArr - �� �������� ������, ������ ����� ������ ��� ������� ���������� ��������� �� 1 ������� � ������. ��� �� ���������� ������ � ������.
//������ ����� ����������� ������������ ���:
int main()
{
	srand(time(NULL));
	int size = 10;
	int* firstArr = new int[size];//������� 2 ������� �������� 10 ���������
	int* secondArr = new int[size];


	FillArr(firstArr, size);//��������� ������� ��� ������ �������
	FillArr(secondArr, size);


	delete[] firstArr; //������ ��������� ������ ������, ��� �� ������ ������ ������
	firstArr = new int[size]; //����� ������� ����� ������� � ������
	for (int i = 0; i < size; i++)
	{
		firstArr[i] = secondArr[i];//����� � ��� ����� ������ ��������� ������ ����������� �� ������� �������
	}

	cout << "FirstArr = \t" ;
	ShowArr(firstArr, size);// ����������������� ��� ������ �������
	cout << "SecondArr = \t" ;
	ShowArr(secondArr, size);



	delete[] firstArr;
	delete[] secondArr;

	return 0;
}
