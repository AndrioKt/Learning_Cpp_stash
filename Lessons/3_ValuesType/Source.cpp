#include <conio.h>
#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;


int main()
{
	setlocale(LC_ALL, "Russian");

	int a,b; // 4 байта
	double f;//8 байт вещественные числа
	char c = 33;// 1 байт (есть возможность кодировать числа или символы вводя значения в соответствии с таблицей Ascii)
	a = 23;
	b = 12;

	cout << "c= " << c << endl;
	cout << "a= " << a << "b = " << b << endl;
	cout << "a + b = " << a	+ b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;// при делении целочисленных значений будет только целое число без остатка
	cout << "a % b = " << a % b << endl;// деление с остатком (a%b= a-b*(a/b целочисленные))
	/*
	short b; // 2 байта
	long c; // 4 байта
	*/

	(void)_getch();
	return 0;
}