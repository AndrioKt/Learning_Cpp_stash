#include <conio.h>
#include <iostream>
#include <math.h>
#include <complex>


using std::cin;
using std::cout;
using std::endl;
using std::complex;


int main()
{
	setlocale(LC_ALL, "Russian");
	double D;
	double i;
	double  a, b, c,x1,x2;
	i = sqrt(-1);
	cout << " введите значение a,b,c ";
	cin >> a ;
	cin >> b;
	cin >> c;
	cout << " a: " << a << " b: " << b << " c: " << c << endl;
	D = b*b - 4 * a * c;
	cout << " D = b^2 - 4 * a * c = " << D << endl;
	if (D >= 0)
	{
		if (D > 0)
		{
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			cout << " Решение: " << " x1: " << x1 << " x2: " << x2 << endl;
		}
		else
			x1 = (-b) / (2 * a);
		cout << " Решение: " << " x1: " << x1 <<endl;
	}
	else cout << "\n D < 0 комплексное число" << endl;
	double RE, IM;
	D = fabs(b * b - 4 * a * c);
	RE = (-b) / (2*a);
	IM = sqrt((fabs(b * b - 4 * a * c))) / (2 * a);
	
	cout << " Решение: " << " x1: " << RE << " + " << IM << "i \n" << " x2: " << RE << "-" << IM << "i" << endl;
	(void)_getch(); //Колхооз
	return 0;
}