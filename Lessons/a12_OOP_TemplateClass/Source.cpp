#include <iostream>
#include <conio.h>
#include <string>
#include <cassert>
using namespace std;

// *******������������ ��������� �������***������������� �������� ������****
/*
template<class T1>//������� ��������� �����
class TypeSize
{
protected:
	T1 value;//� ��������� ������ ��������� ����� ��������� ����� ��� ������
public: TypeSize(T1 value)
{
	this->value = value;
}

		void DataTypeSize()
		{
			cout << "value " << sizeof(value) << endl;

		}
};

template <class T1>////��� ������������ ��������� ������� ��������� ��������� ��� ������, ������� ��� �� ��������� ������� ������
class TypeInfo:public TypeSize<T1>
{
	//��� �� �������� � ����������� ��������� ������� ���������� ��������� �����������, ������� ��� �� �������� ����������� �������� ������
public:
	TypeInfo(T1 value):TypeSize<T1>(value)
	{

	}
	void ShowTipeName()
	{
		cout << "Type Name: " << typeid(this->value).name() << endl; //typeid ���� ���� �������� ���, ���������� � ������� ���� �������� (�������� �������� �������� ������ ����� �1)
	}
};*/

template<typename T>
class Printer
{
public:
	void Print(T value)
	{
		cout << value << endl;

	}
};

template<>//��� �������� ������������� ������� ������ � ������� ��������
class Printer<string>//� ��� �������� ������������� � ������ ��������� ��� ������, �������������� � ������� �� ����� ��������
{
public:
	void Print(string value)//������ ������ ��� �� ���������� ����� �� ������� ������ Printer �� ������ ��� ���� ������ string
	{
		cout << "_____" << value << "____" << endl;
	}
};//���� � ������ ������ (�������������) �� ��������� ����, �� ����� ���������� ����� �������������� ������ � ����� ������ string. 
  //����� ������� ����� ������������ ������������� ������ ���� ���� ������
int main()
{
	/*
	double a = 2;

	TypeInfo<double> c(a);//��������� ����� ����� �������� ������ � 1 ����� ������ ������� �� ��������� ��� �������� �������
	c.ShowTipeName();//������ �������� ���� ����� ��� �� ������� ��� ������, ������� �� ���
	c.DataTypeSize();*/
	
	Printer <string> p;

	p.Print("dsfg");
	
	return 0;
}
