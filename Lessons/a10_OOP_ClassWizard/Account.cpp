
//*******************Файл для описания методов и конструкторов класса*************************
#include "Account.h"
#include <iostream>
#include <conio.h>
using namespace std;
namespace Program//создаем свою область видимости
{
	Account::Account()//опискание конструктора по умолчанию
	{
	
	}
	Account::Account(string id, string name, int balance) // описание явного (пользовательского) конструктора
	{
		ID = id;
		Name = name;
		if (balance < MaxBalance)
			Balance = balance;
		else Balance = 0;
	}
	//Инициализируем геттеры и сеттеры
	//что бы указать чему этот метод соответствует из прототипов заголовочного файла, ставится название класса и два двоеточия (Account::*****)
	void Account::SetID(string id)
	{
		ID = id;
	}
	string Account::GetId()
	{
		return string(ID);
	}
	void Account::SetName(string name)
	{
		Name = name;
	}
	string Account::GetName()
	{
		return string(Name);
	}
	void Account::SetBalance(int balance)
	{
		if (balance < MaxBalance)//проверка превышен ли максимальный баланс
			Balance = balance;
		else balance = 0;//если превышен то обнуляем баланс (хехе)
	}
	int Account::GetBalance()
	{
		return Balance;
	}
	bool Account::AddBalance(unsigned int add)
	{
		if (Balance + add < MaxBalance)
		{
			Balance += add; return true;
		}
		else return false;
	}
	bool Account::TakeCash(unsigned int take)
	{
		if (Balance>=take)
		{
			Balance -= take; return true;
		}
		else return false;
	}
	Account Account::MAX(Account& obj)
	{
		if (Balance < obj.GetBalance())
			return obj;
		else return *this;//указатель this всегда указывает на обьект вызывающий данный метод
		return Account();
	}
	Account::~Account()//пользовательский дейструктор
	{
	}
}