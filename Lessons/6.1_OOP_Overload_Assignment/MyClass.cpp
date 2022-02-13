#include "MyClass.h"
#include <iostream>
#include <conio.h>
using namespace std;

class MyClass
{
	int size;
public:
	int* data;

	MyClass(int size)// вызов конструктора вызывается при создании класса
	{
		this->size = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "construct in  " << this << endl;
	};
	MyClass(const MyClass &other)//конструктор копирования
	{
		this->size = other.size;
		if (this->data != nullptr)//лучше всегда использовать эту проверку. что бы избежать ошибок при обращении в отсутствующу память
		{
			delete[] data;
		}
		this->data = new int [other.size];
		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
	}
	MyClass& operator=(const MyClass& other)//перегружаем оператор присваивания, с учетом возможности использования динамической памяти
	{
		this->size = other.size;
		this->data = new int[other.size];
		for (int i = 0; i < other.size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << "Assignment operator  " << this << endl;
		return *this;//при перегрузки должен возвращатья текущий обьект
	}
	~MyClass() // вызов деструктора, вызывается при выходе за область видимости класса
	{
		cout << "Destructor  " << this << endl;
		if (this->data != nullptr)//лучше всегда использовать эту проверку. что бы избежать ошибок при обращении в отсутствующу память
		{
			delete[] data;
		}
		};
};
void foo(MyClass value)
{
	cout << "  function  ";
}

int main()
{
	MyClass a(10);
	MyClass b(3);

	return 0;
}
