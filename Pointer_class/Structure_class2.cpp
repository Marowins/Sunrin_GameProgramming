#include <iostream>

struct PointData {
	int x;
	int y;
};

class Point {
public:
	PointData data;
};

int main() {
	Point pt;

	pt.data.x; // [class Point] ���� [struct PointData] ���� x ����
}