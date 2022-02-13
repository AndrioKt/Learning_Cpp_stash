#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::pow;
using std::ios_base;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	double A[N];
	for (int i = 0; i < N; i++)
	{
		cout << "A[" << i << "]= ";
		cin >> A[i];
	}


	for (int i = 0; i < N; i++)
		if (A[i] < 2.5)
			cout << "Исключен!" << endl;
		else
		cout << A[i] << endl;
	(void)_getch();
	return 0;
}