#include "MyClass.h"
#include <iostream>
#include <conio.h>
using namespace std;

class MyClass
{
	int size;
public:
	int* data;

	MyClass(int size)// ����� ������������ ���������� ��� �������� ������
	{
		this->size = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "construct in  " << this << endl;
	};
	MyClass(const MyClass &other)//����������� �����������
	{
		this->size = other.size;
		if (this->data != nullptr)//����� ������ ������������ ��� ��������. ��� �� �������� ������ ��� ��������� � ������������ ������
		{
			delete[] data;
		}
		this->data = new int [other.size];
		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
	}
	MyClass& operator=(const MyClass& other)//����������� �������� ������������, � ������ ����������� ������������� ������������ ������
	{
		this->size = other.size;
		this->data = new int[other.size];
		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << "Assignment operator  " << this << endl;
		return *this;//��� ���������� ������ ����������� ������� ������
	}
	~MyClass() // ����� �����������, ���������� ��� ������ �� ������� ��������� ������
	{
		cout << "Destructor  " << this << endl;
		if (this->data != nullptr)//����� ������ ������������ ��� ��������. ��� �� �������� ������ ��� ��������� � ������������ ������
		{
			delete[] data;
		}
		};
};
void foo(MyClass value)
{
	cout << "  function  ";
}

int main()
{
	MyClass a(10);
	MyClass b(3);

	return 0;
}
