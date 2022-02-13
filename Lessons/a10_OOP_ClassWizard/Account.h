#pragma once// ������ ������������� ����� ���� 1 ���
#include <conio.h>
#include <iostream>
using namespace std;
namespace Program//��������� ������� ���������
{
	class Account //������� ����� � ������������ �����
	{
		string ID;
		string Name;
		int Balance;
		const int MaxBalance = 9999999;//������ ������������ �������� �����
	public:
		Account();//�������� ������������ �� ���������
		Account(string,string,int);// �������� ��������� ������ ������������ � ����������� �� ���������
		//!!!������� ��������� �������� � ��������!!! (���� ��� ��������� � Account.cpp)
		void SetID(string);
		string GetId();
		void SetName(string);
		string GetName();
		void SetBalance(int);
		int GetBalance();

		bool AddBalance(unsigned int);//�������� ������ �������� �����
		bool TakeCash(unsigned int);//�������� ������ ������ �����
		Account MAX(Account&);//�������� ������, ����������� ����� �� ������ ()
		~Account();//���������� �� ���������
	};
}
