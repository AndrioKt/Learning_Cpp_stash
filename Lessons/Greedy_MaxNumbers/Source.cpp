#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//******* Жадный алгоритм: нахождение максимального числа из массива неупорядоченных чисел**********

//Реализация при помощи сортировки и инвертирования
void SortInvert()
{
	const int SIZE = 6;// для слишком больших значений происходит переполнение стека
	int temp[SIZE];
	int numbers[SIZE] = { 3,1,7,9,9,5 };
	sort(numbers, numbers + SIZE);//сложность алгоритма сортировки из библиотеки STL ранва n*log(n) и представляет из себя "быструю сортировку"
	for (int i = 0; i < SIZE; i++)
	{
		temp[i] = numbers[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		numbers[i] = temp[SIZE - 1 - i];
		cout << numbers[i];
	}
}

//Реализация конкотенацией со сдвигом (оптимальное жадное решение)
void MaxNumber()
{
	const int SIZE = 6;
	int temp[SIZE];
	unsigned int numbers[SIZE] = { 3,1,7,9,9,5 };

}
int main()
{
	SortInvert();
	return 0;
}