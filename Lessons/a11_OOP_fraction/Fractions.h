#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
class Fractions
{
	int numerator;
	unsigned int denominator;
	// наибольший общий делитель нужен для реализации сокращения дробей
	int GCD(int a, int b)const; //GCD наибольший общий делитель
	// LCD - наименьший общий множитель
	int LCM(int a, int b)const;
	void Sokrashenie();
public:
	friend ostream &operator<< (ostream&, Fractions&);
	Fractions() 
	{
			numerator = 1;
			denominator = 1;
	}//конструктор по умолчанию, присвоен через список инициализации
	Fractions(int n, unsigned int f);
	double Result();
	Fractions operator+(Fractions&)const;
	Fractions operator*(Fractions&)const;
	Fractions operator-(Fractions&)const;
	Fractions operator/(Fractions&)const;
	bool operator==(Fractions&)const;



	~Fractions();
};
