#include <iostream> // C++ ���� stream �� �� �ǹ��ϴ��� �ĺ���

// using my_int = int; using �� �ٸ� ���ӻ� - �ڷ��� �̸��� �ٲ� �� ��� [my_int = a] = [int = a] �� ����

/*
using namespace [�̸�] - ��� namespace�� ������
std::cout << "" - std:: �̶�� ������ ���� ��������� ��� ( �������ϱ�? )
:: - �������������� ( ���� ���ۿ� �ĺ��°� ������ �� )
*/

//using namespace std; //ū ������Ʈ������ �� �Ⱦ���

struct Point {
	int x;
	int y;


		// other�� ���� ���ϴ°� ����    // �Լ��� ���ϴ°� ����
	float distance(const Point& other) const { 
		// pt.x = 10 - const�� ���ؼ� ������ ����
		//this->x = 100; // const�� ���ؼ� ������ ����( �Լ��� ���ϴ°� ����! ���� ������ )
		//other->x = 10; // const�� ���ؼ� ������ ����
		return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2)); // ����� �̸��� ���ٸ� this�� ������ ���� ��� ���� = (pow(other.x - this->x, 2) + pow(other.y - this->y, 2)
	}

	// �Լ��� �����ϴ� ��ü�� struct Point, 
};


int main() { // �����Ϳ� ���۷����� ����

	Point My_point_1 = { 0, 0 };
	Point My_point_2 = { 1, 1 };
	Point My_point_3 = { 2, 2 };

	My_point_1.distance(My_point_2);
	My_point_1.distance(My_point_3);

	//std::cout << distance(My_point_1, My_point_2);

}