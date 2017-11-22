#include <iostream> // C 같은 경우는 Struct 와 Class의 차이가 거의 없음
					// C++ 같은경우도 비슷비슷함

/*
struct와 class 가 같음에도 class를 사용하는이유는 
struct에는 변수로만 이루어져있게 쓰자고 약속했기 때문( 변수만 넣자고 )
위의 경우처럼 변수만 담긴게아닌 여러가지가 필요할때는 class를 사용하기로 약속함
결론적으로는 프로그래머들끼리의 약속이라고 보면 됨
*/
struct PointData { // C++의 구조체 = [기본이 public 인 class]                    // C 와 같은 경우는 그냥 묶음(??) 잘모르겠음
	int x;
	int y;
};

class Point {
private: // default일때, 아무도 접근 못함( 안의 포인터 빼고(?) )
	int x;
	int y;
public: // 이걸 추가하면 struct와 같음( 모두 접근 가능 )
	int z;
protected: // 이런것도 있음 ㅇㅇ 하나 더 알아두는걸로
};

int main() {
	Point pt;
	pt.x; // public 으로 선언하지 않았기 때문에 기본적으로 class point 안의 x는 Private 와 같음( 빨간줄이 뜨는 이유 )
	pt.z; // public 으로 선언해서 외부에서도 접근 가능
}