#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
class Apple
{
	int weight;
	string color;
	static int count;//�������� ����������� ����������, ������� ����� ��������� �������� �� ���� ���������
	int id;
public:
	Apple(int,string);
	int GetId();
	int GetWeight();
	string GetColor();
	~Apple();
};

