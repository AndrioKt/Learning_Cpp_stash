#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include <cassert>

class Creature
{
protected:
	std::string Name;
	char Symbol;
	int Health;
	int Damage;
	int Gold;

public:
	Creature();
	~Creature();
	Creature(std::string,char,int,int,int);
	const std::string& GetName();
	char GetSymbol();
	int GetHealth();
	int GetDamage();
	int GetGold();
	void reduceHealth(int);
	bool isDead();
	void addGold(int);
	void addDamage(int);
	void addHealth(int);

	

};

class Monsters :public Creature
{
public:
	enum Type
	{
		DRAGON,
		ORC,
		SLIME,
		GOBLIN,
		SPIDER,
		MAX_TYPES
	};
	struct MonsterData
	{
		const char* s_name;
		char s_symbol;
		int s_health;
		int s_damage;
		int s_gold;
	};
	static MonsterData monsterData[MAX_TYPES];
	Monsters() {}
	~Monsters() {}
	Monsters(Type type) :Creature(monsterData[type].s_name, monsterData[type].s_symbol, monsterData[type].s_health, monsterData[type].s_damage, monsterData[type].s_gold)
	{
	}
	static Type getRandomMonster();
};

class Player:public Creature
{
protected:
	int level;


public:
	Player(std::string);
	Player();
	~Player();
	int GetLevel();
	void levelUp();
	bool hasWon();
	void BaseAttack(Player& p, Monsters& m, Weapon* wp);
};

class Weapon
{
public:
	friend class Player;
	Weapon();
	~Weapon();
	int GetWeaponDamage();
	virtual void BaseAttack(Player& p, Monsters& m)=0;
	//virtual void SpecialAttack(Player& p, Monsters& m)=0;

private:
	int WeaponDamage = 0;
};


class RustySword:public Weapon
{
protected:
	int WeaponDamage = 1;
public: 
	void BaseAttack(Player& p, Monsters& m)override;
//	void SpecialAttack(Player& p, Monsters& m)override;

};

class LegendarySword :public Weapon
{
protected:
	int WeaponDamage = 5;
public:
	void BaseAttack(Player& p, Monsters& m)override;
//	void SpecialAttack(Player& p, Monsters& m)override;

};

void fightMonster(Player& p);
void attackMonster(Player& p, Monsters& m);
void attackPlayer(Player& p, Monsters& m);
void showMonsterInfo(Player& p, Monsters& m);
void showPlayerInfo(Player& p, Monsters& m);
void Events(Player& p);