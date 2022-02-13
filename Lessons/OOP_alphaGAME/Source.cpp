#include "Game.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <cassert>
using namespace std;

int main()
{
	
	string pname;
	cout << "Enter your name: " << endl;
	cin >> pname;
	Player p(pname);
	cout << "Welcome, " << p.GetName() << "." << endl;
	cout << "You entered the ancient forest, which secrets does it hide?" << endl;
	cout << "Press Enter to move forward." << endl;
	(void)_getch();
	system("cls");
	while (!p.isDead() and !p.hasWon())
	{
	fightMonster(p);
	}

	if (p.isDead())
	{
		cout << "You died on level " << p.GetLevel() << " with " << p.GetGold() << " in your pocket." << endl;
		cout << "Too bad you can't take it with you..." << endl;
	}
	else cout << "You won!!! For this adventure you gain " << p.GetGold() << " gold." << endl;











	/*
	Creature o("orc", 'o', 4, 2, 10);
	o.addGold(5);
	o.reduceHealth(1);
	cout << "The " << o.GetName() << " has " << o.GetHealth() << " health and is carrying " << o.GetGold() << " gold " << endl << endl;
	*/
	/*
	Monsters m(Monsters::SLIME);
	cout << "A " << m.GetName() << " (" << m.GetSymbol() << ") was created." << endl;


	for (int i = 0 ; i < 10; i++)
	{
		Monsters m = Monsters::getRandomMonster();
		cout << "A " << m.GetName() << " (" << m.GetSymbol() << ") was created." << endl;
	}	*/
	return 0;
}