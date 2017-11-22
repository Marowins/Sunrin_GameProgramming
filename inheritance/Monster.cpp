#include "Monster.h"


Monster::Monster(float hp, float attack_damage)
	:Unit(hp, attack_damage, "Monster")
{

}


Monster::~Monster()
{
}

void Monster::attack(Unit& other) const {
	Unit::attack(other);
	cout << other.name << "�� ���� ü�� : " << other.hp << endl;
}