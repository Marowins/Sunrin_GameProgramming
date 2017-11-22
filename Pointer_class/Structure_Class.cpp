#include <iostream> // C ���� ���� Struct �� Class�� ���̰� ���� ����
					// C++ ������쵵 ��������

/*
struct�� class �� �������� class�� ����ϴ������� 
struct���� �����θ� �̷�����ְ� ���ڰ� ����߱� ����( ������ ���ڰ� )
���� ���ó�� ������ ���Ծƴ� ���������� �ʿ��Ҷ��� class�� ����ϱ�� �����
��������δ� ���α׷��ӵ鳢���� ����̶�� ���� ��
*/
struct PointData { // C++�� ����ü = [�⺻�� public �� class]                    // C �� ���� ���� �׳� ����(??) �߸𸣰���
	int x;
	int y;
};

class Point {
private: // default�϶�, �ƹ��� ���� ����( ���� ������ ����(?) )
	int x;
	int y;
public: // �̰� �߰��ϸ� struct�� ����( ��� ���� ���� )
	int z;
protected: // �̷��͵� ���� ���� �ϳ� �� �˾Ƶδ°ɷ�
};

int main() {
	Point pt;
	pt.x; // public ���� �������� �ʾұ� ������ �⺻������ class point ���� x�� Private �� ����( �������� �ߴ� ���� )
	pt.z; // public ���� �����ؼ� �ܺο����� ���� ����
}