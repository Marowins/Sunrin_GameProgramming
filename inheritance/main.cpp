#include <iostream> // <> �� ���� ��� �����Ϸ����� ã�°�
#include "Monster.h" // "" ������� ���Ͽ��� ã�� ������ �����Ϸ����� ã�� ( ���� ¥���� �ڵ� )
#include "Player.h"
#include "Unit.h"
#include "skill.h"
using namespace std;

int main() {
	Weapon w = Weapon(10);
	Unit* p = new Player(50, 2.5, w); // new �ѹ� �ĺ���
	Unit* m = new Monster(30, 10);

	while (1)
	{
		cout << "-------------------------------" << endl;
		p->attack(*m);
		if (p->is_dead() || m->is_dead())
			break;
		m->attack(*p);
		if (p->is_dead() || m->is_dead())
			break;
		cout << "-------------------------------" << endl;
	}

	if (p->is_dead())
		cout << "�÷��̾��� �й�!" << endl;
	else
		cout << "�÷��̾��� �¸�!" << endl;

	delete p; // delete - new �� �ݴ� �ǹ� ( new�� ��������� �� delete�� ����ؾ��� )
	delete m;
}

// C++ ��Ӱ� ������ ���� �����غ���