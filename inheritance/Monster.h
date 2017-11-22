#pragma once
#include "Unit.h"
#include <iostream>
#include <string>
using namespace std;

class Monster :
	public Unit
{
public:
	Monster(float hp, float attack_damage);
	~Monster();

	void attack(Unit& other) const;
};

