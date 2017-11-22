#include "Unit.h"


Unit::Unit(float hp, float attack_damage, const string& name)
	: hp(hp), attack_damage(attack_damage), name(name)
{
}


Unit::~Unit()
{
}

void Unit::attack(Unit& other) const
{
	other.hp -= attack_damage;
	cout << name << "�� " << other.name << "���� �����ߴ�! " << endl;
}

bool Unit::is_dead() const
{
	return hp <= 0;
}