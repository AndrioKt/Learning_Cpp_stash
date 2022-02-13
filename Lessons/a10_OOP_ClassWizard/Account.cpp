
//*******************���� ��� �������� ������� � ������������� ������*************************
#include "Account.h"
#include <iostream>
#include <conio.h>
using namespace std;
namespace Program//������� ���� ������� ���������
{
	Account::Account()//��������� ������������ �� ���������
	{
	
	}
	Account::Account(string id, string name, int balance) // �������� ������ (�����������������) ������������
	{
		ID = id;
		Name = name;
		if (balance < MaxBalance)
			Balance = balance;
		else Balance = 0;
	}
	//�������������� ������� � �������
	//��� �� ������� ���� ���� ����� ������������� �� ���������� ������������� �����, �������� �������� ������ � ��� ��������� (Account::*****)
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
		if (balance < MaxBalance)//�������� �������� �� ������������ ������
			Balance = balance;
		else balance = 0;//���� �������� �� �������� ������ (����)
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
		else return *this;//��������� this ������ ��������� �� ������ ���������� ������ �����
		return Account();
	}
	Account::~Account()//���������������� �����������
	{
	}
}