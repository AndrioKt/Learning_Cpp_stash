#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
#include <array>
struct animal
{
	int horse;
	char pig;
		
};

int sumTo(int a,int c)
{
	for (int i = 0; i < a; i++)
	{
		c += i+1;
	}
	return c;
}
int main()
{
	int a(0),c(0);
	std::cin >> a;
	
	std::cout << std::endl<<sumTo(a,c);
	return 0;
}