

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;

int foo(int a)
{

	if (a == 1)
	{
		return 1;
	}
	if (a == 0)//������� ������� �� ��������, ������������
	{
		return 0;
	}
	return a * foo(a - 1);//��������� ����� ���������� � �������� (��������� ���������)

}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << foo(5) << endl;
	return 0;
}