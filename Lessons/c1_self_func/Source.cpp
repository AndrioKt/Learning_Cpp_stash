#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int Abs(int a)
{
	return abs(a);
}
int main()
{
	mark:
	int c;
	cin >> c;
		cout << Abs(c) << endl;
	goto mark;
	return 0;
}