#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	double C;
	double F;
	double K;

	
	
	cin >> C;
K = C + 273.15;
	C = K - 273.15;
	F = K - 255.37;
	cout << C << endl;
	cout << K << endl;
	cout << F << endl;

	(void)_getch();
	return 0;
}