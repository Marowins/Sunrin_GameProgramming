#include <iostream>
//using namespace std; //큰 프로젝트에서는 잘 안쓰임

struct Point {
	int x;
	int y;
};

// 값만 가져와서 실행하는거면 처음부터 const라고 선언해주고
// [상속,고정] 이라고 불림, 바뀌는거면 굳이 const를 안붙이고 레퍼런스 사용
float distance(const Point p1, Point p2) { // 다른 사람이 볼때 고정적인지 아닌지를 판단해주기 위해서 써주는게 좋음 ( 혼자 프로젝트 진행하면 바뀌는값인지 아닌지 아니까 굳이 쓸필요 X )
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

	//Point My_point_1 = { 0, 0 };
	//Point My_point_2 = { 1, 1 };

	//std::cout << distance(My_point_1, My_point_2);
}