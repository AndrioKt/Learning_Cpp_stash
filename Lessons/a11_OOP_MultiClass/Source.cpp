#include <iostream>
#include <conio.h>
#include <string>
#include <cassert>
using namespace std;



class Car
{
public:
	void Drive()
	{
		cout << "� ���!" << endl;
	
	}

};

class Airplane
{
public:
	void Fly()
	{
		cout << "� ����!" << endl;
	}

};

class FlyingCar:public Car, public Airplane
{
public:
	void Move()
	{
		cout << Car::Drive() << 

	}

};

int main()
{
	FlyingCar fc;

	fc.Fly();
	setlocale(LC_ALL, "ru");
	return 0;
}