
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
using namespace std;
//-------------------------------------------------------
/* ������, �������, ������� ������� � ������ �������*/
//-------------------------------------------------------

class Human //����� (����� �������� ���������������� ����� ������)
{
private://����������� �������
	int age;//�������� ������
	string name;//�������� ������
	int weihgt;
public:
	void Print() // ������� ������
	{
		cout << "Name: " << name << "\tWeight: " << weihgt << "\tage: " << age << endl;//������ ����� ������� � �������, ��� ������ ������� Print
	}

	//������ ������� � �������
	//������� ������ ��� ����, ��� �� ������ ����������� ��� ������ ��� �� ���� ����� ��������
	// ������� ��������� ������� ������������ ������/�������� ���� ��, ��� �� �����
	int GetAge()
	{
		return age;
	}//������. �������, ��� ���� ����� ��� �� �������� �� ������������, �� ������ ������ ���������� � Get
	string GetName()
	{
		return name;
	}
	int GetWeight()
	{
		return weihgt;
	}
	void SetAge(int valueAge)
	{
		age = valueAge;
	};// C�����, ������� �������� � Set
	void SetName(string Human_name)
	{
		name = Human_name;
	};// C�����, ������� �������� � Set
	void SetWeight(int Human_weight)
	{
		weihgt = Human_weight;
	};// C�����, ������� �������� � Set
};
int main()
{
	Human firstHuman;// ������ ������ Human
	firstHuman.SetAge(30);// ���������� �������� ��������� ������ ����� ������
	firstHuman.SetName("Ivan");
	firstHuman.SetWeight(100);
	
	cout << "-----------------------------" << endl;
	firstHuman.Print(); // ����� ���������� ����� ������� ������
	cout << "-----------------------------" << endl;

	cout << "name: " << firstHuman.GetName() << endl;//������� ����� ���������� ����� ������(����� �������� �������� �������� ����� ��������� ������, �� ��� ����������� � ������� ����������)
	cout << "age: " << firstHuman.GetAge() << endl;
	cout << "Weihgt: " << firstHuman.GetWeight() << endl<< endl;
	cout << "___________________"<<  endl;
	Human secondHuman;
	secondHuman.SetAge(22); // ���������� ��������� ������
	secondHuman.SetName("Sergey");
	secondHuman.SetWeight(60);

	cout << "-----------------------------" << endl;
	secondHuman.Print(); // ����� ���������� ����� ������� ������
	cout << "-----------------------------" << endl;

	cout << "name: "<< secondHuman.GetName() << endl;//������� ����� ���������� ����� ������
	cout << "age: " << secondHuman.GetAge() << endl;
	cout << "Weihgt: " << secondHuman.GetWeight() << endl;
	
	return 0;
}