#include <iostream>
#include <conio.h>
#include <string>
#include <cassert>
using namespace std;

//---------------------------
//----������������ �������---
//----------------------------

class Human
{
	string name;
public:
	string getName()
	{
		return name;
	}
	void SetName(string name)
	{

		this->name = name;
	}

};
//� ������ ������ � ����� ������� � �������� ����� ������������ ����� �������������� �������� ������ Human

class Student:public Human //�� ������������ ��� �������������� ������ �������, � ��������� ��� ���������
{
public:
	//string name; ����� ������������ ��� ������ ��� ����� �� �����
	string group;
	void learn()//�������� ����� ���� �����, �������� ����� ���������
	{
		cout << " i am learning!" << endl;
	}

};

class ExtramuralStuden:public Student //�������� ��������� ����� ��� �������� ��������, � ������� ��� ������������ ������ �������.
	//��������� ���� �� ���������� ��� �������������� � ������  ������ Student, ��� � Human
{
public:
	void learn()
	{
		cout << " i am learning, but at home!" << endl;
	}
};

class Professor :public Human
{
public:
//	string name; ����� ������������ ��� ������ ��� ����� �� �����
	string subject;

};

int main()
{
	Student st;
	Professor pr;
	Human h;
	ExtramuralStuden extraSt;
	string name;
	cout << "Enter name" << endl;
	cin >> name;
	//st.name; - ��������� ������������ ������� ������ ��� �� ����� ���� name, �������������� �� ����� Human
	st.learn();// ����� ������� ������� ����� ������������ ���� �����
	extraSt.learn();//����� learn ������� � � ������ ������� � � ������ �������, ��� ������������ ������� ����� ������ �� ������ �������. ����� ������� ���������� ��������������� ������
	st.SetName(name);
	cout << st.getName()<<endl;//����� ������� ��� ������������ ������ �������, ��� �� ������������ � ��� ������/������, � ������ ����� ������ � ���������� ���� name
	return 0;
}