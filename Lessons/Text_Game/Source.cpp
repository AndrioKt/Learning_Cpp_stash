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


	cout << " Вы встречаете монстра: ";
	cout << monst.name << endl;

	cout << " Он имеет \t" << monst.health << " Hp" << endl;

	cout << " Может наносить " << monst.damage << " урона" << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	s_monsters ogre{ "Огр", 2100, 38 };
	s_monsters orc{ "Орк", 630, 9 };
	s_monsters troll{ "Троль", 1860, 33 };
	s_monsters goblin{ "Гоблин", 150, 2 };
	s_monsters skeleton{ "Скелет", 380, 5 };
	cout << " Вы входите в лес полный опасностей." << endl;
	_getch(); system("cls");
	cout << endl << " Вы идете дальше по дороге и слышите шум в дали..." << endl;
	_getch(); system("cls");
	int t = rand() % 6;
	cout << " Вы бросаете кубик..." << endl << " У вас выпадает: " << t << endl;
	_getch(); system("cls");
	switch (t)
	{
	case 0: creation_monsters(ogre); break;
	case 1: creation_monsters(goblin); break;
	case 2: creation_monsters(skeleton); break;
	case 3: creation_monsters(orc); break;
	case 4: creation_monsters(troll); break;
	default: cout << "Вам повезло, шум оказался лишь ветром, и вы проходите лес без происшествий!";
		break;
	}


	_getch();
	return 0;
}