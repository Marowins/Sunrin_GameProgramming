#include <iostream>
//using namespace std; //ū ������Ʈ������ �� �Ⱦ���

struct Point {
	int x;
	int y;
};

float distance(Point p1, Point p2) {
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2)); // sqrt? pow(er)�� ���� �ǹ� (p2.x-p1.x,2) ������ 2 �ǹ�?
}

int main() {

	int a = 10;
	int&b = a; // a = b

	int c;
	c = b;// c = a�� �Ȱ���
	b = 10;
	// a == 10, b == 10
	// �̸��� �ٸ����� �Ȱ������̴�!

	// ( ���� ������ )
	//int* pa = &a;
	//int** ppa = &pa;



	//Point My_point_1 = { 0, 0 };
	//Point My_point_2 = { 1, 1 };

	//std::cout << distance(My_point_1, My_point_2);
}