#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Russian");
	double C;
	double F;
	double K;


	cout << "Введите температуру в С: ";
	cin >> C;
	K = C + 273.15;
	C = K - 273.15;
	F = C * 9/5 +32;
	cout << "Температура в С: " << C << "С" << endl;
	cout << "Температура в К: " << K << "К" << endl;
	cout << "Температура в F: " << F << "Ф" << endl;

	(void)_getch();
	return 0;
}