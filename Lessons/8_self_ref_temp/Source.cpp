// дз: поменять значения а и б местами шаблонами и ссылками

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;

template <class T1, class T2>
void foo(T1 &a, T2 &b)
{
	T1 t = a;// при использовании шаблонов, и инициализация переменных тоже должна быть шаблонной
	a = b;
	b = t;

}


int main()
{
	setlocale(LC_ALL, "Russian");
	int v1(21), v2(64);
	cout << v1;
	cout << v2 << "\n\n";
	foo(v1, v2);
	cout << v1;
	cout << v2;
	return 0;
}
