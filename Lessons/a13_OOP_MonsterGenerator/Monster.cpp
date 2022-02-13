#include "..\OOP_alphaGAME\Game.h"
#include "..\OOP_alphaGAME\Game.h"
#include "..\OOP_alphaGAME\Game.h"
#include "Monster.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <istream>
#include <fstream>
#include <random>
#include <ctime>


Monster::Monster(int type, std::string name, int health)
{
	Type = type;
	Name = name;
	Health = health;
}


void Monster::Print()
{
	std::cout << Name << " is the " << getTypeString(Type) << " that have " << Health << " health points." << std::endl;
}

std::string Monster::getTypeString(int type)
{
	switch (type)
	{
		case 0: return "Dragon";
		break;
		case 1: return "Goblin";
		break;
		case 2: return "Ogre";
		break;
		case 3: return "Orc";
		break;
	case 4: return "Skeleton";
		break;
	case 5: return "Troll";
		break;
	case 6: return "Vampire";
		break;
	case 7: return "Zombie";
		break;
	}
	return "Error!";
}

MonsterGenerator::MonsterGenerator()
{
}

MonsterGenerator::~MonsterGenerator()
{
}

Monster MonsterGenerator::ganerateMonster()
{
	std::string MonsterNames[6]{ "Jack" , "Akhatosh","Sam","Tur","Eragon","Valdan" };
	return Monster(getRandomNumber(0, Monster::MAX_MONSTER_TYPES - 1), MonsterNames[getRandomNumber(0, 5)], getRandomNumber(10, 250));
}

std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(0)) };//инициализируем Вихрь Мерсенна на основе времени. (можно инициализировать в своей собственной области видимости)
int MonsterGenerator::getRandomNumber(int min, int max)//создаем функцию генерации на основе вихря
{//он распределяет числа равномерно от min до max
	std::uniform_int_distribution<> MonsterRandom{ min, max };//uniform_int_distribution - класс, который обеспечивает равномерное и равновероятное распределение чисел по всему диапазону
	return MonsterRandom(mersenne);
}

int main()
{
	Monster jack=MonsterGenerator::ganerateMonster();
	jack.Print();
}