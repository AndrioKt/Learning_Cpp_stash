#include <conio.h>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

struct s_monsters {
	string name;
	int health;
	int damage;
};
enum monsters_name
{
	ogre = 1,
	goblin,
	skeleton,
	orc,
	troll
};

void creation_monsters(s_monsters monst)
{


	cout << " �� ���������� �������: ";
	cout << monst.name << endl;

	cout << " �� ����� \t" << monst.health << " Hp" << endl;

	cout << " ����� �������� " << monst.damage << " �����" << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	s_monsters ogre{ "���", 2100, 38 };
	s_monsters orc{ "���", 630, 9 };
	s_monsters troll{ "�����", 1860, 33 };
	s_monsters goblin{ "������", 150, 2 };
	s_monsters skeleton{ "������", 380, 5 };
	cout << " �� ������� � ��� ������ ����������." << endl;
	_getch(); system("cls");
	cout << endl << " �� ����� ������ �� ������ � ������� ��� � ����..." << endl;
	_getch(); system("cls");
	int t = rand() % 6;
	cout << " �� �������� �����..." << endl << " � ��� ��������: " << t << endl;
	_getch(); system("cls");
	switch (t)
	{
	case 0: creation_monsters(ogre); break;
	case 1: creation_monsters(goblin); break;
	case 2: creation_monsters(skeleton); break;
	case 3: creation_monsters(orc); break;
	case 4: creation_monsters(troll); break;
	default: cout << "��� �������, ��� �������� ���� ������, � �� ��������� ��� ��� ������������!";
		break;
	}


	_getch();
	return 0;
}