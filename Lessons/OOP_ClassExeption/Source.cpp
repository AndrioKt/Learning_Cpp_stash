#include <iostream>
#include <conio.h>
#include <string>
#include <cassert>
using namespace std;

class MyException:public exception
{
public:
	MyException(const char* msg, int dataState):exception(msg)//� ������������ ������ ������ �������� ����������� �������� ������, ��� ����������� �������� � �����������
	{
		this->dataState = dataState;
	}
	int GetDataState() { return dataState; }
private:
	int dataState;//���� �������� ��������� ������

};

void Foo(int value)
{
	if (value < 0)
	{
		throw exception("����� ������ 0 !!!");
	}

	if (value == 1)
	{
		throw MyException("����� = 1 !!!", value);
	}
	cout << "���������� = " << value << endl;
}


int main()
{
	setlocale(LC_ALL, "ru");

	try
	{
		Foo(1);
	}
	//����������� ������ ��������� ����� ���������� ����, � � ����� ����� ��� ����� ����� ������ (����� ������� exceptio)
	catch (MyException &ex)//���������� ������ catch ��� �� ������� ���������� ��� ������ ������
	{
		cout << "���� 1 �� ������� " << ex.what() << endl;// ������������� ���������� � ������� �������� ��������� ������� �����
		cout << "��������� ������ " << ex.GetDataState() << endl;//��� �� �������� ����������� ����������, ������� ������� �� ���������� ������ ����������
	}
	catch (exception & ex)// ������ catch ����� ����������� ��� �� ������ ��� ��������� ����������
	{
		cout << "���� 1 �� ������� " << ex.what() << endl;// ������������� ���������� � ������� �������� ��������� ������� �����
	}
	return 0;
}