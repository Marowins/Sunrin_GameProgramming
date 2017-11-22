#include <iostream>

struct Point; // weapon 의 전부를 위쪽에 두지 않더라도 struct Point; 처럼 선언하면 오류없이 사용 가능함( 전방선언 이라 칭함 )

class Rectangle{
public:
	Point top_left;
	Point bottom_right;
};

void add(int, int);

struct Point {
	int x;
	int y;

	float distance(const Point& other) const; // 선언
		//return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
};

	float Point::distance(const Point& other) const{
		return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2)); // 정의
	}

	int main() {

		Point My_point_1 = { 0, 0 };
		Point My_point_2 = { 1, 1 };
		Point My_point_3 = { 2, 2 };

		My_point_1.distance(My_point_2);
		My_point_1.distance(My_point_3);
	}