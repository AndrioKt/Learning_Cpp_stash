
#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
#include <fstream>
#include <string>
using namespace std;
//-------------------------------------------------------
					/* самостоятельная работа. Классы */
//-------------------------------------------------------
class Numbers
{


	int a;
	int b;
public:
	void set()
	{
		cin >> a;
		cin >> b;
	}
	void print()
	{
		cout << a << b << endl;
	}
};

int main()
{
	Numbers first_number;
	Numbers second_number;
	cout << "Before change\n" << endl;
	cout << "----------------" << endl;
	first_number.print();
	cout << "----------------" << endl;
	second_number.print();
	cout << "Number 1 is " << endl;
	first_number.set();
	cout << "Number 2 is " << endl;
	second_number.set();
	cout << "----------------" << endl;
	first_number.print();
	cout << "----------------" << endl;
	second_number.print();

	return 0;
}
