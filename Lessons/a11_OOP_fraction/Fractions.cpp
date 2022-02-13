#include "Fractions.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <istream>
#include <fstream>
using namespace std;


Fractions::Fractions(int n, unsigned int d)//явный конструктор, тут мы задаем начальные параметры, а в случае с нулевым знаменателем, заменяем на единичную дробь
{
	if (d != 0)
	{
		numerator = n;
		denominator = d;
		Sokrashenie();
	}
	else
	{
		cout << "Знаменатель равен 0! Заменяется на единичную дробь!";
		Fractions();
	}
}

double Fractions::Result()
{
		return (double)numerator / (double)denominator;
}

Fractions Fractions::operator+(Fractions&d1) const
{
	Fractions result;
	if (denominator == d1.denominator)
	{
		result.denominator = denominator;
		result.numerator = numerator + d1.numerator;
		result.Sokrashenie();
		return result;
	}
	int lcm = LCM(denominator, d1.denominator);
	int x = lcm / denominator;
	int y = lcm / d1.denominator;
	result.denominator = lcm;
	result.numerator = numerator * x + d1.numerator * y;
	result.Sokrashenie();
	return result;

}

Fractions Fractions::operator*(Fractions&d1) const
{
	return Fractions(numerator*d1.numerator,denominator*d1.denominator);
}
Fractions Fractions::operator-(Fractions& d1) const
{
	return Fractions(numerator,denominator) + Fractions(-d1.numerator,d1.denominator);
}
Fractions Fractions::operator/(Fractions& d1) const
{
	return Fractions(numerator*d1.denominator,denominator*d1.numerator);
}
bool Fractions::operator==(Fractions& d1) const
{
	if (d1.numerator == numerator and d1.denominator == denominator)
		return true;
	else return false;
}

int Fractions::GCD(int a, int b) const
{
	if (a < 0)
		a *= -1;//проверка на случай елси числитель отрицательный
	while (b)
	{
		a %= b;
		std::swap(a, b);
	}
	return a;
}
int Fractions::LCM(int a, int b) const
{
	return a * b / GCD(a, b);
}

void Fractions::Sokrashenie()
{
	int nod = GCD(numerator, denominator);//при сокращении находим наибольший общий множитель и делим на него и числитель и знаменатель
	numerator /= nod;
	denominator /= nod;
}

ostream& operator<< (ostream& os, Fractions& d1)
	{
		os << d1.numerator << "/" << d1.denominator;
		return os;
	}
Fractions::~Fractions()
{
}
