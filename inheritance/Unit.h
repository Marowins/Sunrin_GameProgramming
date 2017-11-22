#pragma once // ����, include ������� �ߺ��� ���ϱ� ���ؼ� �ѹ��� ���鵵�� �������
#include <iostream>
#include <string>
using namespace std;

class Unit
{
public:
	Unit(float hp, float attack_damage, const string& name); // �̸��� ��ȯ���� �ʰ� �����ϴ°� ( �ظ��ϸ� �̷��� ����ϴ°� ���� [�� �ǰ�] )
	~Unit();

	virtual void attack(Unit& unit) const; // new player�� ������ ģ���� ���� attack ���� ���������ֵ��� ������� ( vitual�� �ɷ��� )
	bool is_dead() const;

	float hp;
	float attack_damage;
	string name;

};

