#include "Player.h"


Player::Player(float hp, float attack_damage, Weapon weapon)
	:Unit(hp, attack_damage, "Player"), weapon(weapon)
{
}


Player::~Player()
{
}

void Player::attack(Unit& other) const {
	Unit::attack(other);

	other.hp -= weapon.attack_damage;
	cout << "����� �߰� ������(" << weapon.attack_damage << ")�� ������!" << endl;
	cout << other.name << "�� ���� ü�� : " << other.hp << endl;

}