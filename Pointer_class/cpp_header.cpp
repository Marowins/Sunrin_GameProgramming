#include <iostream>

struct Point; // weapon �� ���θ� ���ʿ� ���� �ʴ��� struct Point; ó�� �����ϸ� �������� ��� ������( ���漱�� �̶� Ī�� )

class Rectangle{
public:
	Point top_left;
	Point bottom_right;
};

void add(int, int);

struct Point {
	int x;
	int y;

	float distance(const Point& other) const; // ����
		//return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
};

	float Point::distance(const Point& other) const{
		return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2)); // ����
	}

	int main() {

		Point My_point_1 = { 0, 0 };
		Point My_point_2 = { 1, 1 };
		Point My_point_3 = { 2, 2 };

		My_point_1.distance(My_point_2);
		My_point_1.distance(My_point_3);
	}