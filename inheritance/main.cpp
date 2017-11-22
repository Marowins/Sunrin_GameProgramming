#include <iostream> // <> 의 같은 경우 컴파일러에서 찾는것
#include "Monster.h" // "" 같은경우 파일에서 찾고 없으면 컴파일러에서 찾음 ( 내가 짜놓은 코드 )
#include "Player.h"
#include "Unit.h"
#include "skill.h"
using namespace std;

int main() {
	Weapon w = Weapon(10);
	Unit* p = new Player(50, 2.5, w); // new 한번 쳐보기
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
		cout << "플레이어의 패배!" << endl;
	else
		cout << "플레이어의 승리!" << endl;

	delete p; // delete - new 의 반대 의미 ( new를 사용했으면 꼭 delete를 사용해야함 )
	delete m;
}

// C++ 상속과 다형성 예제 실행해보기