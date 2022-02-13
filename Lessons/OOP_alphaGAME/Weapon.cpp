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

void RustySword::BaseAttack(Player& p, Monsters& m)
{
	RustySword r;
	Weapon* wp = &r;
	m.reduceHealth(p.GetDamage() + WeaponDamage);
}




