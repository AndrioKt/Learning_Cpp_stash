#include <iostream>
#include <conio.h>
#include <string>
#include <cassert>
using namespace std;

class MyException:public exception
{
public:
	MyException(const char* msg, int dataState):exception(msg)//в конструкторе нашего класса вызываем конструктор базового класса, для возможности работать с сообщениями
	{
		this->dataState = dataState;
	}
	int GetDataState() { return dataState; }
private:
	int dataState;//поле хранящее состояние данных

};

void Foo(int value)
{
	if (value < 0)
	{
		throw exception("Число меньше 0 !!!");
	}

	if (value == 1)
	{
		throw MyException("Число = 1 !!!", value);
	}
	cout << "Переменная = " << value << endl;
}


int main()
{
	setlocale(LC_ALL, "ru");

	try
	{
		Foo(1);
	}
	//ОБЯЗАТЕЛЬНО сперва указывать более конкретные вещи, и в самом конце уже ловим более широко (общим классом exceptio)
	catch (MyException &ex)//используем первый catch что бы поймать исключения для нашего класса
	{
		cout << "Блок 1 Мы поймали " << ex.what() << endl;// перехватываем исключение с выводом значения использую базовый класс
		cout << "Состояние данных " << ex.GetDataState() << endl;//так же получаем расширенную информацию, которая берется из созданного класса исключений
	}
	catch (exception & ex)// второй catch будем использоваь что бы ловить все остальные исключения
	{
		cout << "Блок 1 Мы поймали " << ex.what() << endl;// перехватываем исключение с выводом значения использую базовый класс
	}
	return 0;
}