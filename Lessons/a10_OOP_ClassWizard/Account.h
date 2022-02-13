#pragma once// запуск заголовочного файла лишь 1 раз
#include <conio.h>
#include <iostream>
using namespace std;
namespace Program//созданная область видимости
{
	class Account //создаем класс в заголовочном файле
	{
		string ID;
		string Name;
		int Balance;
		const int MaxBalance = 9999999;//введем максимальное значение счета
	public:
		Account();//прототип конструктора по умолчанию
		Account(string,string,int);// прототип заданного явного конструктора с аргументами по умолчанию
		//!!!создаем прототипы геттеров и сеттеров!!! (сами они находятся в Account.cpp)
		void SetID(string);
		string GetId();
		void SetName(string);
		string GetName();
		void SetBalance(int);
		int GetBalance();

		bool AddBalance(unsigned int);//прототип метода внесение денег
		bool TakeCash(unsigned int);//прототип метода снятия денег
		Account MAX(Account&);//прототип метода, передающего класс по ссылке ()
		~Account();//деструктор по умолчанию
	};
}
