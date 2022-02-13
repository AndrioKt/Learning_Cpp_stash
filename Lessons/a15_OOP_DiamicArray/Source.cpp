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
using namespace std;

class IntArray
{
public:
	IntArray(int length);
	IntArray(const IntArray& array);
	~IntArray();
	IntArray& operator= (const IntArray& array);
	int& operator[](int index);
	friend ostream& operator<< (ostream& out, const IntArray& point);

private:
	int Length;
	int *myarray=nullptr;
};

IntArray::IntArray(int length) :
	Length(length)
{
	assert(length > 0 && "IntArray length should be a positive integer");//проверка что длинна больше 0
	myarray = new int[Length] {0};
}
IntArray::IntArray(const IntArray& array)//конструктор копировани€
{
	Length = array.Length;
	myarray = new int[Length];
	for (int i = 0; i < array.Length; i++) // полностью скопируем все значени€ из исходного массива в новый
	{
		myarray[i] = array.myarray[i];
	}

}

IntArray::~IntArray()
{
	delete [] myarray;
}
IntArray& IntArray::operator=(const IntArray& array)
{
	//—делаем проверку самоприсваивани€
	if (this == &array)
		return *this;
	//—делаем удаление массива если он уже существует
	delete[] myarray;
	
	Length = array.Length;

	//¬ыделим пам€ть новому массиву
	myarray = new int[Length];
	//—копируем элементы из исходного массива в только что созданный
	for (int i = 0; i < array.Length; i++)
	{
		myarray[i] = array.myarray[i];
	}
	return *this;
}
int& IntArray::operator[](int index)
{
	assert(index >= 0);
	assert(index < Length);
	return myarray[index];
}
ostream& operator<<(ostream& out, const IntArray& point)
{
	for (int i = 0; i < point.Length; i++)
	{
		out << point.myarray[i] << " ";
	}
	return out;
}
IntArray fillArray()
{
	IntArray a(6);
	a[0] = 6;
	a[1] = 7;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;
		a[5] = 8;
	return a;
}


int main()
{
	IntArray a = fillArray();
	cout << a << endl;

	IntArray b(1);
	a = a;
	b = a;

	cout << b << endl;
	return 0;
}


