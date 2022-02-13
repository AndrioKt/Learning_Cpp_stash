#include "Game.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <cassert>
#include <ctime>
#include <random>
#include <cmath>
std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(time(0)) };
using namespace std;


	Creature::Creature(){}


	Creature::~Creature(){}

	Creature::Creature(string name, char symbol, int health, int damage, int gold)
	{
		Name = name;
		Symbol = symbol;
		Health = health;
		Damage = damage;
		Gold = gold;
	}

	const string &Creature::GetName(){return Name;}


	char Creature::GetSymbol(){return Symbol;}
	int Creature::GetHealth(){return Health;}
	int Creature::GetDamage(){return Damage;}
	int Creature::GetGold(){return Gold;}
	void Creature::reduceHealth(int rhealth){Health -= rhealth;}
	bool Creature::isDead()
	{
		if (Health <= 0)
		{
			return true;
		}
		else return false;
		return false;
	}
	void Creature::addGold(int addgold){Gold += addgold;}
	void Creature::addDamage(int incr)
	{
		Damage += incr;
	}
	void Creature::addHealth(int heal)
	{
		Health += heal;
	}


	Player::Player(string name): Creature(name, '@', 10, 1, 0){this->level = 1;}
	Player::Player(){}
	Player::~Player(){}
	int Player::GetLevel(){return level;}
	void Player::levelUp()
	{
		level++;
		Damage++;
	}

	bool Player::hasWon()
	{
		return level>=20;
	}

	Monsters::MonsterData Monsters::monsterData[Monsters::MAX_TYPES]
	{
		{"Dragon",'D',20,4,100},
		{"Orc",'o',8,3,25},
		{"Slime",'s',1,1,5},
		{"Goblin",'g',2,2,15},
		{"Spider",'p',2,1,10}
	};


	int getRandomNumber(int min, int max)
	{
		std::uniform_int_distribution<> MonsterRandom{ 0,Monsters::MAX_TYPES - 1 };
		return MonsterRandom(mersenne);
	}

	Monsters::Type Monsters::getRandomMonster()
	{
		int num = getRandomNumber(0, Monsters::MAX_TYPES - 1);
		return static_cast<Monsters::Type> (num);
	}

	void attackMonster(Player &p,Monsters &m)
	{
		if (p.isDead())
		{
			return;
		}
		cout << "You hit " << m.GetName() << " for " << p.GetDamage() << " damage." << endl;
		m.reduceHealth(p.GetDamage());
		cout << "The " << m.GetName() << " have " << m.GetHealth() << " health." << endl << endl;
		if (m.isDead())
		{
			p.addGold(m.GetGold());
			p.levelUp();
			cout << "You killed the monster, you gained " << m.GetGold() << " gold, and reach " << p.GetLevel() << " level." << endl << endl;
			return;
		}
	}

	void attackPlayer(Player& p, Monsters& m)
	{
		if (m.isDead())
		{
			return;
		}
		cout  << m.GetName() << " hit you for " << m.GetDamage() << " damage." << endl;
		p.reduceHealth(m.GetDamage());
		cout << "You have " << p.GetHealth() << " health." << endl << endl;
		if (p.isDead())
		{
			return;
		}
	}

	void fightMonster(Player &p)
	{
		Monsters m = Monsters::getRandomMonster();
		char desigion=0;
		system("cls");
		Events(p);
		cout << "-----------------------------------------------" << endl;
		cout << "You have encountered a " << m.GetName() << " ("<< m.GetSymbol() << ")" << endl;

		while (!m.isDead() and !p.isDead())
		{
		cout << "(You can press (m) for information about enemy, or (p) to see your parameters.)\n You want to fight(f) or run(r):";
		while (desigion != 'r' or desigion != 'f' or desigion != 'm' or desigion != 'p')
			{
				cin >> desigion;
				if (desigion == 'r')
				{
					if (getRandomNumber(0, 1) == 1)
					{
						cout << "You successfully fled" << endl;
						cout << "Press Enter to move forward." << endl;
						(void)_getch();
						return;
					}
					else
					{
						attackPlayer(p, m);
						if (p.isDead())
						{
							return;
						}
						break;
					}
				}
				else if (desigion == 'f')
				{
					attackMonster(p, m);
					attackPlayer(p, m);
				}
				else if (desigion == 'm')
				{
					showMonsterInfo(p, m);
				}
				else if (desigion == 'p')
				{
					showPlayerInfo(p, m);
				}
				else
					cout << "Error! Entered wrong key." << endl;
					
				break;
			}
		}
		cout << "Press Enter to move forward." << endl;
		(void)_getch();
		return;
	}

	void showMonsterInfo(Player& p, Monsters& m)
	{
		cout << m.GetName() << " have: " << m.GetHealth() << " hp, \t" << m.GetDamage() << " damage, \t" << m.GetGold() << " gold." << endl;
	}
	void showPlayerInfo(Player& p, Monsters& m)
	{
		cout << "You have: " << p.GetHealth() << " hp, \t" << p.GetDamage() << " damage, \t" << p.GetGold() << " gold." << endl;
	}
	void Events(Player& p)
	{
	int event = getRandomNumber(1, 5);
		char choise = 0;
		switch (event)
		{
		case 1: cout << "It's a calm and warm day, you are walk forward, and it's seems like nothing couldn't disturb you, but... " << endl;
			cout << "Press Enter to move forward." << endl;
			(void)_getch();
			break;
		case 2: cout << "You found old and rusty sword, do you want to take it?(y/n)" <<endl;
			while (choise !='y' or choise != 'n')
			{
				cin >> choise;
				if (choise == 'y')
				{
					cout << "You increased your damage by 1" << endl;
					p.addDamage(1);
					break;
				}
				else if (choise == 'n')
				{
					cout << "You are going forward" << endl;
					break;
				}
				else 
				{
					"Error! Entered wrong key.";
				}
			}
			cout << "Press Enter to move forward." << endl;
			(void)_getch();
			break;
		case 3: cout << "You found a spring of youth, that heal you by 2 hp" << endl;
			p.addHealth(2);
			cout << "Press Enter to move forward." << endl;
			(void)_getch();
			break;
		case 4: cout << "You see a stump with a hole. Do you want to look inside? (y/n)" << endl;
			while (choise != 'y' or choise != 'n')
			{
				cin >> choise;
				int random = getRandomNumber(1, 3);
				if (choise == 'y')
				{
					if (random == 1)
					{
						int rrandom = getRandomNumber(1, 5) * 5;
						cout << "You found hiden stash with "<< rrandom << " gold coins." << endl;
						p.addGold(rrandom);
						cout << "Press Enter to move forward." << endl;
						(void)_getch();
						break;
					}
					else if (random == 2)
					{
						cout << "There were termites inside a stump, you have gained 1 damage" << endl;
						p.reduceHealth(100);
						if (p.isDead())
						{
							cout << "You are dead! What a pity to die this way..." << endl;
							cout << "You died on level " << p.GetLevel() << " with " << p.GetGold() << " in your pocket." << endl;
							(void)_getch();
							exit(0);
						}
						cout << "Press Enter to move forward." << endl;
						(void)_getch();
						break;
					}
					else 
					{
						cout << "It's just a stump, you didn't find anything. You can continue your journey." << endl; 	
						cout << "Press Enter to move forward." << endl;
						(void)_getch(); break;
					}
				}
				else if (choise == 'n')
				{
					cout << "You are going forward" << endl;
					cout << "Press Enter to move forward." << endl;
					(void)_getch();
					break;
				}
				else
				{
					"Error! Entered wrong key.";	
				}
			}
		case 5: cout << "You met a merchant. You can buy: \n \"Apple\" (heal 1 hp) cost 5 gold; \n \"Healing potion\" (heal 5 hp) cost 15 gold; \n \"Legendary magic sword\", that cost 50 gold;\n \"Potion of experience\" (gain 1 level up) - cost 20 gold." << endl;
			cout << "If you want to buy something, enter the name, or press \"n\" to exit the store." << endl;
			string trade;
			while (trade != "Apple" or trade != "Healing potion" or trade!= "Legendary magic sword" or trade != "Potion of experience" or trade != "n")
			{
				cin >> trade;
				if (trade == "n")
				{
					cout << "You are leaving the merchant." << endl;
					cout << "Press Enter to move forward." << endl;
					(void)_getch();
					break;
				}
				else if (trade == "Apple")
				{
					if (p.GetGold()<5)
					{
						cout << "You haven't enough money, and the merchant throws you out of the store" << endl;
						cout << "Press Enter to move forward." << endl;
						(void)_getch();
						break;
					}
					else {
						cout << "You are buying Apple, and healing 1 hp." << endl;
						p.addGold(-5);
						p.addHealth(1);
						cout << "Press Enter to move forward." << endl;
						(void)_getch();
						break;
					}
				}
				else if (trade == "Healing potion")
				{
					if (p.GetGold() < 15)
					{
						cout << "You haven't enough money, and the merchant throws you out of the store" << endl;
						cout << "Press Enter to move forward." << endl;
						(void)_getch();
						break;
					}
					else {
						cout << "You are buying Healing potion, and healing 5 hp." << endl;
						p.addGold(-15);
						p.addHealth(5);
						cout << "Press Enter to move forward." << endl;
						(void)_getch();
						break;
					}
				}
				else if (trade == "Legendary magic sword")
				{
					if (p.GetGold() < 50)
					{
						cout << "You haven't enough money, and the merchant throws you out of the store" << endl;
						cout << "Press Enter to move forward." << endl;
						(void)_getch();
						break;
					}
					else {
						cout << "You are buying Legendary magic sword, and gain 3 damage ." << endl;
						p.addGold(-50);
						p.addDamage(3);
						cout << "Press Enter to move forward." << endl;
						(void)_getch();
						break;
					}
				}
				else if (trade == "Potion of experience")
				{
					if (p.GetGold() < 20)
					{
						cout << "You haven't enough money, and the merchant throws you out of the store" << endl;
						cout << "Press Enter to move forward." << endl;
						(void)_getch();
						break;
					}
					else {
						cout << "You are buying Potion of experience, and increased your level by 1." << endl;
						p.addGold(-20);
						p.levelUp();
						cout << "Press Enter to move forward." << endl;
						(void)_getch();
						break;
					}
				}
				else
				{
					"Error! Entered wrong key.";
				}
			}
		}
	}
