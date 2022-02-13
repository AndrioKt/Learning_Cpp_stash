#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
#include <array>

int change(int &a, int &b)
{
	std::swap(a, b);
	return a,b;
	
}

int main()
{
	int a(3), b(12);
	int a1 = a; int b1 = b;
	a == b1 ? std::cout << "correct" : std::cout << "wrong";
	return 0;
}