#include <conio.h>
#include <iostream>
#include <cmath>
using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::pow;
using std::ios_base;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a=0;
	char quit;
	
	/*
	while(a < 10)
	{
		cout << "���� ����������: " << a++ << endl;// ���������� ����� ���� �� ��������� 10
	}

	do
	{
		cout << "���������� ���������? (y/n): ";
	} while (cin >> quit && quit == 'y');//����� ���������� ���������� ���� �������� Y. �����: cin ������ ������ ������, ��� �� �� ���� ������� ��������� �������� �������
	 
	*/
	/*
	for (int i = 0; i <= 10; i += 2)// ���������� �� 2
	{
		cout << i << endl;
	}
	*/

	const int N = 64;
	unsigned long long res = 1, pow = 1;

	for (int i(1); i <= 64; i++)
	{
		for (int j(0); j < i; j++)
			pow *= 2;
		cout << "� ����� �� " << i << " ������ ����������" << res << "������ \n";
		res += pow;
		pow = 1;
	}// ������� ����� ����� � ������ ���������� ����� ������� �����




	(void)_getch();
	return 0;
}