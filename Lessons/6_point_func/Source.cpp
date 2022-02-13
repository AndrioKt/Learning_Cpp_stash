//возврат нескольких значений функции

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;

void foo(int *pa, int *pb, int *pc)
{
	(*pa)=555;//обращаемс€ к €чейке с переменной а и перезаписываем ее
	(*pb) ++;
	(*pc) = -20;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a(0),b(0),c(1);
	cout << a << " a " << endl;
	cout << b << " b " << endl;
	cout << c << " c " << endl << "------------" << endl;
	foo(&a,&b,&c);// при помощи & указываем адрес €чейки в пам€ти
	cout << a << " a " << endl;
	cout << b << " b " << endl;
	cout << c << " c " << endl;
	return 0;
}
