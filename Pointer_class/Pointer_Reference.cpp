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
};

float distance(Point& p1, Point& p2) { /* 고냥 My_point1과 My_point2의 정보를 고대로 복사해오니까 1000바이트 같은 큰 크기를 다 복사해옴 - 메모리낭비
									 그래서 레퍼런스를 쓰면 새로 별명을 만들어주는거니까 복사를 안함! ( 복사하는 속도가 안생기니까 게임 속도가 빨라진다 ) */
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2)); // sqrt? pow(er)는 제곱 의미 (p2.x-p1.x,2) 마지막 2 의미?
}


int main() { // 포인터와 레퍼런스의 차이

	Point My_point_1 = { 0, 0 };
	Point My_point_2 = { 1, 1 };
	
	std::cout << distance(My_point_1, My_point_2);



	//Point pt = { 10, 20 };





	// 아무 값도 안 가진 상태로 존재할 수 있는가?

	/*  레퍼런스 : 다른 변수의 별명, 가르키는 다른 변수가 없으면 존재할 수 없음
				   다른 변수가 없으면 절대로 선언하지 못함, 항상 어떠한 값을 가르키고 있어야함 
				   ex) = pt; 
	*/	//Point& pt_ref = pt;

	/* 포인터 : 
				   어떠한 주소를 가르킨다, 어느한 위치를 지정해도 딱히 문제 없다
	*/	//Point* pt_ptr = nullptr;






	// 멤버 접근을 어떻게 하는가?		. - 멤버 연산자

	//pt.x; // 원본
	//pt_ref.x; // 레퍼런스 값을 그대로 가져와서 따로 봄
	//pt_ptr->x; // 포인터, 원본을 가르키는 주소값을 저장 ( 원본값의 주소를 저장했기때문에 값을 변경할경우 원본의 값도 같이 변함 )
// (*pt_ptr).x; - 화살표 없을때  pt_ptr->x = (*pt_ptr).x 





}