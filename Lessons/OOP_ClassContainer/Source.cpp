#include <iostream>
#include "Header.h"

int main()
{
	//Объявим массив из 10 элементов
	ArrayInt array(10);

	//Заполним массив числами от 1 до 10
	for (int i = 0; i < 10; i++)
		array[i] = i + 1;

	//Изменяем размер массива до 7 элементов:
	array.resize(7);

	//Вставим число 15 перед элементом с индексом 4
	array.insertBefore(15, 4);

	//Удаляем элемент с индексом 5
	array.remove(5);

	//Добавляем числа 35 и 50 в конец и начало
	array.insertAtEnd(35);
	array.insertAtBeginning(50);

	//Выводим все элементы массива
	for (int j = 0; j < array.getLength(); j++)
		std::cout << array[j] << " ";

	return 0;
}