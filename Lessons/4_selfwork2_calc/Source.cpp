#include <conio.h>
#include <iostream>
#include <cmath>
#include <complex>


using std::cin;
using std::cout;
using std::endl;
using std::complex;
using std::pow;

int main()
{
	setlocale(LC_ALL, "Russian");
	double  a, b, x;
	char c;
	cout << "��������� ��������\n +,-,*,/,%,^, : -(������), c-cos, s-sin, t-tan, l-log, e- exp(n)" << endl;
	cout << "������� ����� a: " << endl;
	cin >> a;
	cout << "������� ��������� ��������: " << endl;
	cin >> c;
	switch (c)
	{
		
	case '+': cout << "������� ����� b: " << endl;
		cin >> b;
		x= a + b; break;
	case '-': cout << "������� ����� b: " << endl;
		cin >> b; 
		x = a - b; break;
	case '*': cout << "������� ����� b: " << endl;
		cin >> b;
		x = a * b; break;
	case '/':cout << "������� ����� b: " << endl;
		cin >> b;
		x = a / b; break;
	case '%': b = 0, x = a/100; break;
	case '^': cout << "������� ����� b: " << endl;
		cin >> b;
		x = pow(a, b); break;
	case ':': cout << "������� ����� b: " << endl;
		cin >> b;
		x = pow(a, (1/b)); break;
	case 'c': x = cos(a); break;
	case 's': x = sin(a); break;
	case 't': x = tan(a); break;
	case 'l':x = log(a); break;
	case 'e':x = exp(a); break;
	default: (cout << " ������ ");	
	}
	cout << "���������: " << x << endl; 
	(void)_getch(); 
	return 0;
}