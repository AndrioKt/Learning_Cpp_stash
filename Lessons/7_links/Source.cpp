// дз: поменять значения а и б местами

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;


void foo(int a)
{
	a = 1;



}
void foo2(int& a)
{
	a = 2;



}
void foo3(int *a)
{
	*a = 3;



}
int main()
{
	int val = 5;
	cout << "value = " << val << endl;
	foo(val);
	cout << "foo val =  "<< val << endl;
	foo2(val);// напрямую через ссылку присваивает в а значение 5
	cout << "foo2 val =  " << val << endl;
	foo3(&val);// значение 5 присваивается через указатель в адрес
	cout << "foo3 val =  " << val << endl;




	/*
	int a = 5;
	int* pa = &a;//указатель
	int& aref = a;//Reference - ссылка
	cout << "a\t" << a << endl;
	cout << "*pa\t" << *pa << endl;
	aref = 5516;
	cout << "&aref\t" << aref << endl;//ссылки сразу работают со значениями и их не нужно разименовывать
	cout << "a\t" << a << endl;

	//
	int* pp;

	*/



	return 0;
}
