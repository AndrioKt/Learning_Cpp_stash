#include<conio.h> //директива загрузки библиотеки для ввода/вывода в консоль
#include<iostream>

using std::cout; //директива использования пространства времен std (стандарт)
using std::endl;


int main()
{
	cout << "Hello World!" << endl; //cout - оператор вывода значений в консоль, endl - оператор перевода на новую строку
	cout << "\tName: \tAndrey\n \tSur: \tSychev\n \tPost: \tEngineer 1 category\n \tAge:"<< "\t26";
	(void)_getch();// закрепление консоли
	return 0;
}