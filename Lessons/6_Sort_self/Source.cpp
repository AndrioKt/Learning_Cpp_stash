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
	for (int i = 0; i < N; i++)
	{
		cout << "A[" << i << "]= ";
		cin >> A[i];
	}
	 
	for (int i = 0; i < N; i++)
	
		//A[i] = rand() % 10;
		for (int j = 0; j < N-1; j++)
			if (A[j] > A[j + 1])	
				swap(A[j], A[j + 1]);
	for (int i = 0; i < N; i++)
	cout << A[i];
	(void)_getch();
	return 0;
}