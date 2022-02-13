#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>

using std::cin;
using std::cout;
using std::endl;
using std::pow;
using std::ios_base;

int main()
{
	setlocale(LC_ALL, "Russian");
	int s(0), m, h, d, x(0);
		for (int x(0), s(0), m(0), h(0), d(0); s < 61;)
		{
			if (s >= 60)
			{
				s = 0; 
				x++;
			}
			else s++;
		m = x % 60;
		d = x / 1440;
		h = ((x / 60) - 24 * d);
		cout << " \ts:" << s << " \tm:" << m << " \th:" << h << " \td:" << d << endl;
		Sleep(1000);
		}
	
	(void)_getch();
	return 0;
}