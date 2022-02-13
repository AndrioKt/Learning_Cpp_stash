

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;

void foo()
{
	cout << "function" << endl;


}
int sum(int a, int b)
{
	return a+b;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int q, w;
	cin >> q >> w;
	cout << sum(q, w);
	return 0;
}