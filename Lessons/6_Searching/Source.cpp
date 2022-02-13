
#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//------------------------------------------------------------
//                �������� ��������� ������ �������� � �������
//---------------------------------------------------------------
int binarySearch(vector <int> & array, int size, int val) 
{
	int min=0, max = size; //������ ������� � ������� ����� �����
	
	while (min <=max)
	{
	int centre = min + ((max-min)/2); // ������� ����� �������
			if (array[centre] > val) // ���� ����������� �������� ������� ������ ��������, �� ����������� ������� ��������
			{
				max = centre - 1;
			}
			else if (array[centre] < val)// ���� ����������� �������� ������� ������ ��������, �� ����������� ������ ��������
			{
				min = centre + 1;
			}
			else return centre;
	} 
	return 1;
}

int main()
{
	setlocale(LC_ALL, "ru");
	int val;
	cout << "������� ��������: \n";
	cin >> val;
	cout << "������� ������ �������: \n";
	int f;
	cin >> f;
	vector <int> array;//��������� ������ (������)
	int x;
	for (int i = 0; i < f; i++)
	{
		cout << "������� " << i + 1 << " �������.\n";
		cin >> x;
		array.push_back(x);//���������� �������� � ������
	}
	sort(array.begin(), array.end());//������ ���������� (�������� ������ �������� ������ � ��������������� ��������)
	int size = sizeof(array)/ sizeof(int)-1;//���������� ������ �������
	int i = binarySearch(array,size, val);
	if (array[i] == val)
	{
		cout << "Good! Your value in array\n" << val;
	}
	else cout << "Fail! Your value is not in array\n" << val;
	
	return 0;
}