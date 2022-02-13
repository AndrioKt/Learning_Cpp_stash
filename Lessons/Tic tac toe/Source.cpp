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

// крестики нолики

void instruction()
{
	cout << "\t\t *** Крестики-Нолики***\n\n";
	cout << "Вид поля: \n";
	int l = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "| " << l + 1 << " ";
			table[i][j] = char(49 + l);// 49-код единицы(т.к таблица char то задавть надо кодом символа). в итоге 1+Л это следующее значение
			l++;
		}
		cout << "| ";
		cout << endl;
	}
	cout << "Для хода нажимать соответствующую цифру \n";
	cout << "Для начала игры нажмите любую клавишу \n";
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
		cout << "Ходит " << name1 << " : ";
	else cout << "Ходит " << name2 << " : ";

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
		//cout << "Нельзя ставить на занятую клетку \n";

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

	cout << "1 игрок, введите ваше имя\n";
	cin.getline(name1,30);
	cout << "2 игрок, введите ваше имя\n";
	cin.getline(name2, 30);
	srand(time(NULL));
	if (rand() & 1)//то же что и %2, но быстрее
		step = true;
	else step = false;

	while (!win())
	{
		if (counter == 9)
		{
		cout << " Ничья! ";
		_getch();
		return-1;
		}

		system("cls");
		if (!input())
		{
			cout << "введены неверные данные! ";
			_getch();
		}
		counter++;
	}
	system("cls");
	if (step)
		cout << "Победил: " << name2 << endl;
	else cout << "Победил: " << name1 << endl;


	return 0;
}