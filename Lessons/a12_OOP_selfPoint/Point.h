#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include <istream>
#include <fstream>
class Point
{
	double m_a;
	double m_b;
public:
	Point();
	Point(double, double);
	void Print()const;
	friend double distanceFrom(const Point& first,const Point& other);
	~Point();
};

