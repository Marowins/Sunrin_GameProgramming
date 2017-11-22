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
	cout << "무기로 추가 데미지(" << weapon.attack_damage << ")를 입혔다!" << endl;
	cout << other.name << "의 남은 체력 : " << other.hp << endl;

}