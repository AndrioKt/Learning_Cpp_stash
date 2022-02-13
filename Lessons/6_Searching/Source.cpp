
#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//------------------------------------------------------------
//                Алгоритм бинарного поиска значения в массиве
//---------------------------------------------------------------
int binarySearch(vector <int> & array, int size, int val) 
{
	int min=0, max = size; //заадем границы в которых вести поиск
	
	while (min <=max)
	{
	int centre = min + ((max-min)/2); // находим центр массива
			if (array[centre] > val) // если центральное значение массива больше искомого, то отбрасываем верхнюю половину
			{
				max = centre - 1;
			}
			else if (array[centre] < val)// если центральное значение массива меньше искомого, то отбрасываем нижнюю половину
			{
				min = centre + 1;
			}
			else return centre;
	} 
	return 1;
}

int main()
{
	setlocale(LC_ALL, "ru");
	int val;
	cout << "Искомое значение: \n";
	cin >> val;
	cout << "Введите размер массива: \n";
	int f;
	cin >> f;
	vector <int> array;//обьявляем вектор (массив)
	int x;
	for (int i = 0; i < f; i++)
	{
		cout << "Введите " << i + 1 << " элемент.\n";
		cin >> x;
		array.push_back(x);//записываем значения в вектор
	}
	sort(array.begin(), array.end());//делаем сортировку (алгоритм поиска работает только с отсортированным массивом)
	int size = sizeof(array)/ sizeof(int)-1;//определяем размер массива
	int i = binarySearch(array,size, val);
	if (array[i] == val)
	{
		cout << "Good! Your value in array\n" << val;
	}
	else cout << "Fail! Your value is not in array\n" << val;
	
	return 0;
}