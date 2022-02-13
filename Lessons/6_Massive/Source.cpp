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
	int A[N];// []-размерность массива(матрицы)
	//cout << sizeof(A) << endl; проверка количества байт массива
	//A[0] = 100;присвоение нулевому значению массива(индексация массива) - не удобно, потому используют цикл
	//может задаваться только константа
	/*
	for (int i = 0; i < N; i++) //в цикле можно задавать массив в том числе и переменной
	{
		A[i] = i + 1; 
		cout << "A[" << i << "] = " << A[i] << endl;
	}
	*/
	/*
	int arr[3][2] = { {23,34}, {1,2}, {5,7} }; // Двумерный массив (матрица)
	for (int i=0; i<3; i++)
		for (int j = 0; j < 2; j++)
		{
			cout << " " << arr[i][j]
		}
		cout << endl;
		*/
	cout << "Заполнение массива: \n";
	for (int i = 0; i < 10; i++)//задаем вручную через консоль все значения массива
	{
		cout << "Введите значение " << i << "элемента массива: ";
		while (!(cin >> A[i]))//условие если ввод не произошел
		{
			cin.clear();
			while (cin.get() != '\n');
				cout << "Введите значение " << i << "элемента массива: ";
		}
	}
	system("cls");
	cout << "Исходный массив: \n";
	for (int i = 0; i < 10; i++)
		cout << "A[" << i << "] = " << A[i] << endl;

	int Max = A[0], Min = A[0];
	for (int i = 0; i < 10; i++)// Нахождение максимального и минимального значения массива
	{
		if (Max < A[i])
			Max = A[i];
		if (Min > A[i]);
			Min = A[i];
	}
	cout << "Max: " << Max << endl;
	cout << "Min: " << Min << endl;

	(void)_getch();
	return 0;
}