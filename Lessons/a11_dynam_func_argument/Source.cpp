// динамические массивы/функции заполнения массивов/ копирование массивов

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;

void FillArr(int* const arr, const int size)//функция заполнения массива. const нужны для удобства, а так же облегчения различных задачь 
//например библиотек и классов (при вызове будет отображаться какие параметры/аргументы необходимо передать))
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArr(int* const arr, const int size)//функция отображения массива
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

//firstArr = secondArr - НЕ КОПИРУЕТ МАССИВ, вместо этого просто оба массива используют указатель на 1 область в памяти. Так же происходит утечка в памяти.
//Вместо этого копирование производится так:
int main()
{
	srand(time(NULL));
	int size = 10;
	int* firstArr = new int[size];//создаем 2 массива размером 10 элементов
	int* secondArr = new int[size];


	FillArr(firstArr, size);//заполняем массивы при помощи функции
	FillArr(secondArr, size);


	delete[] firstArr; //сперва удаляется старый массив, что бы небыло утечки памяти
	firstArr = new int[size]; //далее создает новый участок в памяти
	for (int i = 0; i < size; i++)
	{
		firstArr[i] = secondArr[i];//далее в эту новую память переносим данные поэлементно из второго массива
	}

	cout << "FirstArr = \t" ;
	ShowArr(firstArr, size);// отображаеммассивы при помощи функций
	cout << "SecondArr = \t" ;
	ShowArr(secondArr, size);



	delete[] firstArr;
	delete[] secondArr;

	return 0;
}
