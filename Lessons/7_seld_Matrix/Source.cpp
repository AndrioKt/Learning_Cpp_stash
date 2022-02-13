#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::pow;
using std::ios_base;


int main()
{

	setlocale(LC_ALL, "Russian");
	double M1[3][3];
	double M2[3][3];
	double M3[3][3];

	cout << "Заполните 1 матрицу 3х3\n";

	for (int i(0); i < 3; i++)
	{
		for (int j(0); j < 3; j++)
		{
			cin >> M1[i][j];
			M3[i][j] = 0;
		}
	}

	system("cls");

	cout << "Заполните 2 матрицу 3х3\n";

	for (int i(0); i < 3; i++)
	{
		for (int j(0); j < 3; j++)
		{
			cin >> M2[i][j];
		}
	}
	system("cls");
	for (int i(0); i < 3; i++)
	{
		for (int j(0); j < 3; j++)
		{
			for (int m(0); m < 3; m++)
			{
				M3[i][j] += M1[i][m] * M2[m][j];
			}
		}
	}
	for (int i(0); i < 3; i++)
	{
		for (int j(0); j < 3; j++)
		{
			cout << M3[i][j] << ' ';
		}
		cout << endl;
	}
	(void)_getch();
	return 0;
}