#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
int countTotalItems(int res, int *count)
{
	enum items
	{
		potions = 0,
		torches,
		arrows
	};


	for (int i = 0; i < 3; i++)
	{
		res += count[i];
	}
	return res;
}

int main()
{	
	int count[]{ 3,6,12 };
	int res(0);
	res = countTotalItems(res,count);
	std::cout << "Player have " << res << " total items";

	return 0;

}