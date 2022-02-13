

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cstring>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;

/*
int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 5;
	cout << "a\t" << a << endl;
	int *px = &a;// * -  это указатель вызова, присваивающий в переменную px. Амперсанд & - используется как оператор взятия адреса.
// (правило хорошего тона в указателях добавлять "p")
	//в данном случае берется адрес переменной а, в памяти и передается в px
	int* px2 = &a;
	*px2 = 2;// можно перезаписать новыми данными ячейку памяти на которую есть указатель *px

	cout << "a\t" << a << endl;
	cout << "px\t" << *px << endl; // при выводе повтрное введение "*" приводит как разименованию (восстановлению значения из ячейки памяти)
	return 0;
} */
int main()
{
	setlocale(LC_ALL, "Russian");

	const int SIZE = 5;
	int arr[SIZE]{ 5,55,32,1,21 };// обычное присвоение массива так же является указателем на его 1 элемент
	for (int i = 0; i < SIZE; i++) 
	{
		cout << arr[i] << endl;
	}
	cout << "---------------------------" << endl;

	int* parr = arr;// указатель и массив одно и то же
	for (int i = 0; i < SIZE; i++)
	{
		cout << parr[i] <<" parr[i] тоже что и *(parr+i) "<<*(parr+i)<< endl;//если 
	}
	return 0;
}
