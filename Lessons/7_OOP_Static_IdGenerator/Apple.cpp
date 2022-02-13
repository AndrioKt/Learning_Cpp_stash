#include "Apple.h"
#include <iostream>
#include <conio.h>
using namespace std;


Apple::Apple(int weight,string color)
{
	this->weight = weight;
	this->color = color;
	count++;//��� ������ ������ ������������ (��� ������ �������� ��������), ����� ������������ �������
	id = count;// �������� ������� �������� ���������� �������� � ���������� id
}

int Apple::GetId()
{
	return id;
}
int Apple::GetWeight()
{
	return weight;
}
string Apple::GetColor()
{
	return string(color);
}
//��� ������ ����������� ���������� �� ������������� ������ ������������� ����������� ������:
int Apple::count = 0;

Apple::~Apple()
{
}

int main()
{
	Apple apple(150, "Green");
	Apple apple2(222, "Red");
	Apple apple3(152, "Yellow");

	cout << apple.GetId() << " Apple have: ";
	cout << "Weight: " << apple.GetWeight() << " Collor: " << apple.GetColor() << endl;
	cout << apple2.GetId() << " Apple have: ";
	cout << "Weight: " << apple2.GetWeight() << " Collor: " << apple2.GetColor() << endl;
	cout << apple3.GetId() << " Apple have: ";
	cout << "Weight: " << apple3.GetWeight() << " Collor: " << apple3.GetColor() << endl;
}