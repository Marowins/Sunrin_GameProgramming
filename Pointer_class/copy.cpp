#include <iostream>
//using namespace std; //큰 프로젝트에서는 잘 안쓰임

struct Point {
	int x;
	int y;
};

float distance(Point p1, Point p2) {
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2)); // sqrt? pow(er)는 제곱 의미 (p2.x-p1.x,2) 마지막 2 의미?
}

int main() {

	int a = 10;
	int&b = a; // a = b

	int c;
	c = b;// c = a랑 똑같음
	b = 10;
	// a == 10, b == 10
	// 이름만 다른거지 똑같은것이다!

	// ( 이중 포인터 )
	//int* pa = &a;
	//int** ppa = &pa;



	//Point My_point_1 = { 0, 0 };
	//Point My_point_2 = { 1, 1 };

	//std::cout << distance(My_point_1, My_point_2);
}