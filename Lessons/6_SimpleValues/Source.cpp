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
	
	cout << "\t\t***������� �����***\n";
	
	const int N = 1500;
	bool simpleNumber[N + 1];//N+1 �.� �������� �� 0 �� 15
	for (int i = 2; i < N + 1; i++)// 1 �� �������� �� ������� �� ������� ������, ������ ��� �� �������������
		simpleNumber[i] = true;

	for (int i = 2; i  <= N; i++)
	{
		if (simpleNumber[i])
		{
			for (int j = i * i; j <= N; j += i)// j+=i ����� ��� �� ����������� �������� j �� �������� i, ��� �� ����� ��������� ��� ����� ������� ����
				simpleNumber[j] = false;// ������ j �������� ����� - �����������
		}
	}
	for (int i = 2; i <= N; i++)//����� ���� ��� �������� i, ��� �� ������� �� �� �����
		if (simpleNumber[i])
			cout << i << endl;
	(void)_getch();
	return 0;
}