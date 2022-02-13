#include <iostream>
#include <cassert> 
#include <fstream> 
#include <windows.h> 
using namespace std;

void Foo(int value)
{
	if (value < 0)
	{
		throw exception("Wrong"); //��� ���������� ������� �� ������� ����������
	}
	cout << "Value = " << value << endl;
}

int main()
{
	try//��������� ���������� �������
	{
		Foo(-55);
	}
	catch (const exception & except) //��� ������ ����������, ����� ��� � ������� ��������� � ���������
	{
		cout << "Exception cathced: " << except.what() << endl;
	}

	return 0;
}

