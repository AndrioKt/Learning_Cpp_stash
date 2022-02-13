#include "Point.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <istream>
#include <fstream>
#include <cmath>
using namespace std;


Point::Point() {
	m_a = 0, m_b = 0;
}

Point::Point(double a, double b)
{
	m_a = a;
	m_b = b;
}

void Point::Print()const
{
	cout << m_a  << " " << m_b << endl;
}


double distanceFrom(const Point& first, const Point & other)
{
	return sqrt((first.m_a - other.m_a)*(first.m_a - other.m_a)+(first.m_b - other.m_b)* (first.m_b - other.m_b));
}


Point::~Point()
{
}

int main()
{
	Point first;
	Point second(2.0,5.0);
	first.Print();
	second.Print();
	cout << endl <<"Distance between: " << distanceFrom(first, second);


}
