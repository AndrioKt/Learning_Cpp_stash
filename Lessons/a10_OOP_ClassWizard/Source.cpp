//***********************************�������� ���� � �������� Main************************************
#include "Account.h"
#include <iostream>
#include <conio.h>
using namespace std;

using Program::Account;//��������� ������������� ��������� ����������� ������� ���������
int main()
{
	int cash;
	char choise;
	Account a("id 2223512", "Denis", 100);
	Account b("id 2223512", "Egor", 2000);
	a.SetBalance(100);
	a.SetID("34252");
	a.SetName("Denis");

	cout << "ID: " << a.GetId() << endl;
	cout << "Name: " << a.GetName()<< endl;
	cout << "Balance: " << a.GetBalance() << endl;
	cout << "Do you want to take or add money?(t/a)" << endl;//����������� �������� (������ ��� ����� ������)

	while (true)//������ ���� ������� ���������
	{
	cin >> choise;
		if (choise == 'a')//��� � ������������ ����� �������� �����
		{
			cout << "Enter how much money you want to add: " << endl;
			cin >> cash;
			if (a.AddBalance(cash))
				cout << "You Have: " << a.GetBalance() << endl;
			else cout << "Error! You are too rich!" << endl << a.GetBalance() << endl;
		}
		else if (choise == 't')//��� � ������������ ����� ������ �����
		{
			cout << "Enter how much money you want to take: " << endl;
			cin >> cash;
			if (a.TakeCash(cash))
				cout << "Take your " << cash << " from dispenser." << endl << "You have left: " << a.GetBalance() << endl;
			else cout << "Error! You haven't enough money! You have: " << a.GetBalance() << endl;
		}
		else cout << "Incorrect input" << endl;
		break;
	}
	cout << "--------------------  balance b: " << endl;
	cout << b.GetBalance() << endl; //������ ������� ������ �
	cout << "--------------------  max balance from a and b: " << endl;
	cout << a.MAX(b).GetBalance();//������� � ���� ������ ����� (� � ��� �)
	return 0;
}