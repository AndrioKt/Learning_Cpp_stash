#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
class Fractions
{
	int numerator;
	unsigned int denominator;
	// ���������� ����� �������� ����� ��� ���������� ���������� ������
	int GCD(int a, int b)const; //GCD ���������� ����� ��������
	// LCD - ���������� ����� ���������
	int LCM(int a, int b)const;
	void Sokrashenie();
public:
	friend ostream &operator<< (ostream&, Fractions&);
	Fractions() 
	{
			numerator = 1;
			denominator = 1;
	}//����������� �� ���������, �������� ����� ������ �������������
	Fractions(int n, unsigned int f);
	double Result();
	Fractions operator+(Fractions&)const;
	Fractions operator*(Fractions&)const;
	Fractions operator-(Fractions&)const;
	Fractions operator/(Fractions&)const;
	bool operator==(Fractions&)const;



	~Fractions();
};
