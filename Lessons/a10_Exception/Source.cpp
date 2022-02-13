#include <iostream>
#include <cassert> 
#include <fstream> 
#include <windows.h> 
using namespace std;

void Foo(int value)
{
	if (value < 0)
	{
		throw exception("Wrong"); //при выполнении условий мы бросаем исключение
	}
	cout << "Value = " << value << endl;
}

int main()
{
	try//проверяем выполнение функции
	{
		Foo(-55);
	}
	catch (const exception & except) //при броске исключения, ловим его и выводим сообщение с описанием
	{
		cout << "Exception cathced: " << except.what() << endl;
	}

	return 0;
}

