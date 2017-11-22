#include <iostream> // C++ 에서 stream 이 뭘 의미하는지 쳐보기

// using my_int = int; using 의 다른 쓰임새 - 자료형 이름을 바꿀 때 사용 [my_int = a] = [int = a] 와 동일

/*
using namespace [이름] - 어느 namespace를 쓰는지
std::cout << "" - std:: 이라는 형식을 없이 쓰고싶을때 사용 ( 귀찮으니까? )
:: - 범위지정연산자 ( 따로 구글에 쳐보는게 좋을듯 함 )
*/

//using namespace std; //큰 프로젝트에서는 잘 안쓰임

struct Point {
	int x;
	int y;


		// other의 값이 변하는걸 막음    // 함수가 변하는걸 막음
	float distance(const Point& other) const { 
		// pt.x = 10 - const를 통해서 수정을 막음
		//this->x = 100; // const를 통해서 수정을 막음( 함수가 변하는걸 막음! 따라서 빨간줄 )
		//other->x = 10; // const를 통해서 수정을 막음
		return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2)); // 비슷한 이름이 없다면 this를 지워도 딱히 상관 없음 = (pow(other.x - this->x, 2) + pow(other.y - this->y, 2)
	}

	// 함수를 실행하는 주체는 struct Point, 
};


int main() { // 포인터와 레퍼런스의 차이

	Point My_point_1 = { 0, 0 };
	Point My_point_2 = { 1, 1 };
	Point My_point_3 = { 2, 2 };

	My_point_1.distance(My_point_2);
	My_point_1.distance(My_point_3);

	//std::cout << distance(My_point_1, My_point_2);

}