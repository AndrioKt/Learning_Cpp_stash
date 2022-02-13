// √енератор рандомных ”Ќ» јЋ№Ќџ’ чисел

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));//задает зависимость генерации от функции time (аргумент srand всегда будет разным, а значит и генераци€ всегда будет разной)

	int const SIZE = 10;
	int arr[SIZE]{};
	bool povt;
	
	for (int i(0); i < SIZE;)
	{
		povt = false;
		int newval = rand() % 20;

		for (int j(0); j < i; j++)//задает проверку повторени€ значений
		{
			if (arr[j] == newval)
			{
				povt = true;
				break;
			}
		}
			if (!povt) //заходит в условие если переменна€ false(тк отрицание от false = true)
			{
				arr[i] = newval;// задает новое значение при возникновении повторени€
				i++;
			}
	}
	int min = arr[0];//переменна€ минимального значени€
	for (int i(1); i < SIZE; i++) // массив поиска минимального значени€
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	for (int i(0); i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "min value: " << min << endl;
	(void)_getch();
	return 0;
}