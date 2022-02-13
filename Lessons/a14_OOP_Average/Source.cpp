#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
#include <fstream>
using namespace std;

class Average
{
public:
	Average();
	~Average();
	int GetSum();
	int GetCount();
	Average& operator+=(const int other);
	friend ostream& operator<< (ostream& out, const Average& value);

private:
	int32_t Sum;
	int8_t Count;
};

Average::Average()
{
	Sum = 0;
	Count = 0;
}

Average::~Average()
{
}

int Average::GetSum()
{
	return this->Sum;
}
int Average::GetCount()
{
	return this->Count;
}





Average& Average::operator+=(const int other)
{
	Sum += other;
	Count++;
	return *this;
}

ostream& operator<<(ostream& out, const Average& value)
{
	out << value.Sum / value.Count;
	return out;
}


int main()
{
	Average avg;

	avg += 5;
	cout << avg << endl;//5/1=5

	avg += 9;
	cout << avg << endl;//(5+9)/2 =7

	avg += 19;
	cout << avg << endl;//(5+9+19)/3=11

	avg += -9;
	cout << avg << endl;//(5+9+19-9)/4=6

	(avg += 7) += 11;
	cout << avg << endl;//(5+9+19-9+7+11)/6=7


	Average copy = avg;
	cout << copy << endl;

	return 0;
}