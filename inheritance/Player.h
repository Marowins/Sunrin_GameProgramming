#pragma once
#include "Unit.h"
#include "Weapon.h"
#include <iostream>
#include <string>
using namespace std;

class Player :
	public Unit
{
public:
	Player(float hp, float attack_damage, Weapon weapon);
	~Player();

	void attack(Unit& other) const;
	Weapon weapon;
};

