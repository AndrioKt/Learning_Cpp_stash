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


	cout << "������� ����������� � �: ";
	cin >> C;
	K = C + 273.15;
	C = K - 273.15;
	F = C * 9/5 +32;
	cout << "����������� � �: " << C << "�" << endl;
	cout << "����������� � �: " << K << "�" << endl;
	cout << "����������� � F: " << F << "�" << endl;

	(void)_getch();
	return 0;
}