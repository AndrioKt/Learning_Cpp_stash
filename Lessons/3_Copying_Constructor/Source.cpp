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
	MyClass(const MyClass& other)//����������� �����������
	{
		this->size = other.size;
		this->data = new int[other.size];
		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << "copy contructor" << this << endl;
	}
	~MyClass() // ����� �����������, ���������� ��� ������ �� ������� ��������� ������
	{
		cout << "Destructor  " << this << endl;
		delete[] data;
	};
};
void foo(MyClass value)
{
	cout << "  function  ";
}

int main()
{
	MyClass a(10);
	MyClass b(a);
	return 0;
}
