#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include <istream>
#include <fstream>

class Monster
{
public:
enum MonsterType
{
Dragon,
Goblin,
Ogre,
Orc,
Skeleton,
Troll,
Vampire,
Zombie,
MAX_MONSTER_TYPES
};

private:
	int Type;
	std::string Name;
	int Health;
public:
	Monster(int, std::string, int);
	void Print();
	std::string getTypeString(int);
	~Monster();
};

class MonsterGenerator
{
public:
	MonsterGenerator();
	~MonsterGenerator();
	static Monster ganerateMonster();
	static int getRandomNumber(int, int);
private:

};



