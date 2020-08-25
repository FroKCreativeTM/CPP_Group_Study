#include <iostream>

class Point
{
private : 
	int x, y;

public : 
	Point(int _x = 0, int _y = 0) :
		x(_x), y(_y) {}

	void ShowPosition() const
	{
		std::cout << '[' << x << ", " << y << ']' << std::endl;
	}


	Point operator+(const Point& ref)
	{
		// pos.x : x + ref.x
		// pos.y : y + ref.y
		Point pos(this->x + ref.x, this->y + ref.y);
		return pos;
	}
};

int main()
{
	Point p1(10, 20);
	Point p2(30, 40);
	Point p3 = p1.operator+(p2);

	p1.ShowPosition();
	p2.ShowPosition();
	p3.ShowPosition();

	return 0;
}