#include <iostream>
//using namespace std; //ū ������Ʈ������ �� �Ⱦ���

struct Point {
	int x;
	int y;
};

// ���� �����ͼ� �����ϴ°Ÿ� ó������ const��� �������ְ�
// [���,����] �̶�� �Ҹ�, �ٲ�°Ÿ� ���� const�� �Ⱥ��̰� ���۷��� ���
float distance(const Point p1, Point p2) { // �ٸ� ����� ���� ���������� �ƴ����� �Ǵ����ֱ� ���ؼ� ���ִ°� ���� ( ȥ�� ������Ʈ �����ϸ� �ٲ�°����� �ƴ��� �ƴϱ� ���� ���ʿ� X )
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

	//Point My_point_1 = { 0, 0 };
	//Point My_point_2 = { 1, 1 };

	//std::cout << distance(My_point_1, My_point_2);
}