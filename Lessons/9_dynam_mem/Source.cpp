// дз: поменять значения а и б местами шаблонами и ссылками

#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <cctype>
#include <string>
#include <ctime>
using namespace std;

int main()
{	srand(time(NULL));
	/*
	int* pa = new int;// добавление динамической памяти для указателя pa
	*pa = 10;
	cout << *pa << endl;
	delete pa;//удаление динамической памяти, выделенной для pa

	pa = NULL;//обнуление оставшихся данных в (pa) имеет тип данных int
	// pa = nullptr   - отличается от NULL тем, что имеет свой другой тип данных (помогает избежать перегрузки)
	cout << pa << endl;
	*/

	int size = 0; // в динамическом моссиве не обязательно использовать слово const
	cout << "enter array size" << endl;
	cin >> size;
	int* arr = new int[size]; // указатель на динамический массив скобки указывают размер динамического массива
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand()%10;
	}
		for (int i = 0; i < size; i++)
{
	cout << arr[i] << "\t";// указывает значения ячеек массива
	cout << arr + i << endl; // указывавет адреса ячеек массива
}
	delete [] arr; //при удалении в массиве требуется вводить квадратные скобки сразу после delete для удаления полного массива



	return 0;
}
