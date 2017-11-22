#pragma once // 복붙, include 헤더파일 중복을 피하기 위해서 한번만 만들도록 만들어짐
#include <iostream>
#include <string>
using namespace std;

class Unit
{
public:
	Unit(float hp, float attack_damage, const string& name); // 이름을 변환하지 않게 설정하는것 ( 왠만하면 이렇게 사용하는게 좋음 [쌤 의견] )
	~Unit();

	virtual void attack(Unit& unit) const; // new player로 선언한 친구의 안의 attack 에서 참조시켜주도록 만들어줌 ( vitual의 능력이 )
	bool is_dead() const;

	float hp;
	float attack_damage;
	string name;

};

