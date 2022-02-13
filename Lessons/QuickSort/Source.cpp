#include <iostream>

using namespace std;

void qsortRecursive(int* mas, int size) {
	//Зададим первый и последний элемент массива
	int i = 0;
	int j = size - 1;

	//Найдем центральный элемент массива
	int mid = mas[size / 2];

	//Делим массив
	do {
		//Пробегаем элементы, ищем те, которые нужно перекинуть в другую часть
		//В левой части массива пропускаем элементы, которые меньше центрального
		while (mas[i] < mid) {
			i++;
		}
		//В правой части пропускаем элементы, которые больше центрального
		while (mas[j] > mid) {
			j--;
		}

		//Меняем элементы местами
		if (i <= j) {
			int tmp = mas[i];
			mas[i] = mas[j];
			mas[j] = tmp;

			i++;
			j--;
		}
	} while (i <= j);


	//Рекурсивные вызовы, если осталось, что сортировать
	if (j > 0) {
		//"Левый кусок"
		qsortRecursive(mas, j + 1);
	}
	if (i < size) {
		//"Првый кусок"
		qsortRecursive(&mas[i], size - i);
	}

}

int main()
{
	int size = 10;
	int mas[]{ 4,2,3,1,6,8,7,9,5,0 };
	qsortRecursive(mas,size);
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << endl;
	}
	return 0;
}