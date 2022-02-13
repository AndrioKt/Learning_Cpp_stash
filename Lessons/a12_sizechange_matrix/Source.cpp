// динамические массивы/функции заполнени€ массивов/ копирование массивов

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;

void FillArr(int* const arr, const int size)//функци€ заполнени€ массива. const нужны дл€ удобства, а так же облегчени€ различных задачь 
//например библиотек и классов (при вызове будет отображатьс€ какие параметры/аргументы необходимо передать))
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArr(int* const arr, const int size)//функци€ отображени€ массива
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void push_back(int *&arr, int&size, int& ssize, int *&arr2)//функци€ сдвига(прибавлени€ €чейки)/ важно передавать указатель arr именно по ссылке(&), в противном случае не будет вызыватьс€ функци€ с аргументом arr
{
	int* secondArr = new int[ssize];
	for (int i = 0; i < ssize; i++)
	{
		secondArr[i] = arr[i];//передаем значени€ прошлой матрицы

	
		int isize = size + i;

		secondArr[isize] = arr2[isize];
	}
	//задаем значение в следующую (новую) €чейку массива
	delete[] arr;
	arr = secondArr;// присваиваем адрес нового массива
}
void pop_back(int*& arr, int& size)//функци€ сдвига(вычитание €чейки)
{
	size--;
	int* secondarr = new int[size];

	for (int i = 0; i < size; i++)
	{
		secondarr[i] = arr[i];//передаем значени€ прошлой матрицы
	}
	delete[] arr;
	arr = secondarr;

}

int main()
{
	int size = 5;
	int ssize;
	cin >> ssize;
	char newLenght;
	int* arr = new int[size];

	
	cout << "Enter number of new elements" << endl;


	cout << "Your Array" << endl;
	FillArr(arr, size);
	ShowArr(arr, size);
	cout << "new array has more or less elements(M/L)\n";
	cin >> newLenght;
	if (newLenght == 'M')// зададим проверку при выборе уменьшени€ или увеличени€ массива
	{
	int* arr2 = new int[size];
	for (int i = size; i < ssize; i++)
	{
	cout << "Enter values" << endl;
	cin >> arr2[i];
	}

		push_back(arr, size, ssize, arr2);
		ShowArr(arr, ssize);
	}
	else if (newLenght == 'L')
	{
		int el(0);
		cout << "enter how many elements should be deleted\n";
		cin >> el;
		if (el >= size)
			cout << "Error! Value more then array lenght! ";
		else
		{
			size -= el;
			pop_back(arr, size);
			ShowArr(arr, size);
		}
	}
	else cout << "Error! Unckonwn value! ";
	delete[] arr;
	return 0;
}
