#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
#include <fstream>
#include <cassert>
#include <iomanip>
using namespace std;

class FixedPoint
{
	int16_t Base;
	int8_t Decimal;
public:
	FixedPoint(int16_t base = 0, int8_t decimal = 0):Base(base),Decimal(decimal)
	{
	if (decimal < 0.0 or base < 0.0)
	{
		if (base > 0.0)
			Base = -Base;
		if (decimal > 0.0)
			Decimal = -Decimal;
	}
}
	operator double()const
	{
		return Base + static_cast<double>(Decimal) / 100;
	}
FixedPoint(double base)
{
	Base = static_cast<int16_t>(base);
	Decimal= static_cast<int8_t>(round((base - Base)*100));
}

FixedPoint operator-()
{
		return FixedPoint(-Base,-Decimal);
}
friend ostream& operator<< (ostream& out, const FixedPoint& point)
{
	out << static_cast<double>(point);
	return out;
}
friend istream& operator>> (istream& in, FixedPoint& point)
{
	double d;
	in >> d;
	point = FixedPoint(d);

	return in;
}
friend FixedPoint operator+ (const FixedPoint& first, const FixedPoint& second)
{
return FixedPoint(static_cast<double>(first)) + FixedPoint(static_cast<double>(second));
}
friend bool operator == (const FixedPoint& first, const FixedPoint& second)
{

	return first.Base == second.Base and first.Decimal == second.Decimal;//т.к выражение само по себе вернет либо true либо false, и вернет результат вычесления
}
};

void SameTest()
{
	cout << boolalpha;
	cout << (FixedPoint(0.75) + FixedPoint(1.23) == FixedPoint(1.98)) << endl;
	cout << (FixedPoint(0.75) + FixedPoint(1.50) == FixedPoint(2.25)) << endl;
	cout << (FixedPoint(-0.75) + FixedPoint(-1.23) == FixedPoint(-1.98)) << endl;
	cout << (FixedPoint(-0.75) + FixedPoint(-1.50) == FixedPoint(-2.25)) << endl;
	cout << (FixedPoint(0.75) + FixedPoint(-1.23) == FixedPoint(-0.48)) << endl;
	cout << (FixedPoint(0.75) + FixedPoint(-1.50) == FixedPoint(-0.75)) << endl;
	cout << (FixedPoint(-0.75) + FixedPoint(1.23) == FixedPoint(0.48)) << endl;
	cout << (FixedPoint(-0.75) + FixedPoint(1.23) == FixedPoint(0.75)) << endl;
}



int main()
{/*
	FixedPoint a(37, 58);
	cout << a << endl;

	FixedPoint b(-3, 9);
	cout << b << endl;

	FixedPoint c(4, -7);
	cout << c << endl;

	FixedPoint d(-5, -7);
	cout << d << endl;

	FixedPoint e(0, -3);
	cout << e << endl;
	*/
	//cout << static_cast<double>(e) << endl;
	/*
	FixedPoint a(0.03);
	cout << a << endl;

	FixedPoint b(-0.03);
	cout << b << endl;

	FixedPoint c(4.01);
	cout << c << endl;

	FixedPoint d(-4.01);
	cout << d << endl;
	*/
	SameTest();

	FixedPoint a(-0.48);
	cout << a << endl;
	cout << -a << endl;
	cout << "Enter a number";
	cin >> a;
	cout << "you entered" << a << endl;


}