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
	int A[N];
	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 10;
	}


	for (int i = 0; i < N; i++)
	{
	sum = sum + A[i];
		cout << "A[" << i << "]= " << A[i] << endl;
	}
		cout << sum / N << endl;
	(void)_getch();
	return 0;
}