#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <ctime>
using namespace std;
char name1[30];
char name2[30];
char table[3][3];
bool step;
int counter(0);

// �������� ������

void instruction()
{
	cout << "\t\t *** ��������-������***\n\n";
	cout << "��� ����: \n";
	int l = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "| " << l + 1 << " ";
			table[i][j] = char(49 + l);// 49-��� �������(�.� ������� char �� ������� ���� ����� �������). � ����� 1+� ��� ��������� ��������
			l++;
		}
		cout << "| ";
		cout << endl;
	}
	cout << "��� ���� �������� ��������������� ����� \n";
	cout << "��� ������ ���� ������� ����� ������� \n";
	_getch();

}

bool input()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "| " << table[i][j] << ' ';
		}
		cout << '|' ;
		cout << endl;
	}
	cout << endl;

	int n;
	if (step)
		cout << "����� " << name1 << " : ";
	else cout << "����� " << name2 << " : ";

	cin >> n;
		if (n < 1 || n > 9)
			return false;

		int i, j;

		if (n % 3 == 0)
		{
			i = n / 3 - 1;
			j = 2;
		}
		else
		{
			j = n % 3 - 1;
			i = n / 3;
		}
		if (table[i][j] == 'X' || table[i][j] == '0')
			return false;
		//cout << "������ ������� �� ������� ������ \n";

		if (step)
		{
			table[i][j] = 'X';
			step = false;
		}
		else { table[i][j] = '0'; step = true; }
		return true;
	}

bool win()
{
	for (int i = 0; i < 3; i++)
	if((table[i][0]==table[i][1])&&(table[i][0] == table[i][2]))
	return true;
	else if ((table[0][i] == table[1][i]) && (table[0][i] == table[2][i]))
	return true;
	else if ((table[0][0] == table[1][1]) && (table[0][0] == table[2][2])|| (table[0][2] == table[1][1]) && (table[0][2] == table[2][0]))
	return true;


	return false;
}

int main()
{
	setlocale(LC_ALL, "ru");

	instruction();
	system("cls");

	cout << "1 �����, ������� ���� ���\n";
	cin.getline(name1,30);
	cout << "2 �����, ������� ���� ���\n";
	cin.getline(name2, 30);
	srand(time(NULL));
	if (rand() & 1)//�� �� ��� � %2, �� �������
		step = true;
	else step = false;

	while (!win())
	{
		if (counter == 9)
		{
		cout << " �����! ";
		_getch();
		return-1;
		}

		system("cls");
		if (!input())
		{
			cout << "������� �������� ������! ";
			_getch();
		}
		counter++;
	}
	system("cls");
	if (step)
		cout << "�������: " << name2 << endl;
	else cout << "�������: " << name1 << endl;


	return 0;
}