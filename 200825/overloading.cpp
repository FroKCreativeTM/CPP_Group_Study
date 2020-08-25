// 불가능한 것
// . .* :: ?: sizeof typeid static_cast dynamic_cast const_cast reinterpret_cast 

// 가능한 것
// +, -, *, /, %, ++, --
// << >> 
// = (대입 연산자)
// () (함수 호출 연산자)
// [] (배열 접근 연산자, 우리가 인덱스 접근할 때 쓰는 거)
// -> 멤버 접근을 위한 포인터 연산자.

// 단 지양해야 될 점들!
// 1. 본래의 의도와 벗어난 형태의 연산자 오버로딩을 좋지 않다.

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

	friend Point& operator--(Point& ref);
};

class TwoByTwoMatrix
{
private : 
	int elem[2][2];

public : 
	TwoByTwoMatrix(int _oneone = 0, int _onetwo = 0, int _twoone = 0, int _twotwo = 0)
	{
		elem[0][0] = _oneone;
		elem[0][1] = _onetwo;
		elem[1][0] = _twoone;
		elem[1][1] = _twotwo;
	}

	void ShowPosition() const
	{
		for (size_t y = 0; y < 2; y++)
		{
			for (size_t x = 0; x < 2; x++)
			{
				std::cout << elem[y][x] << " ";
			}
			std::cout << std::endl;
		}
	}

	TwoByTwoMatrix operator+(const TwoByTwoMatrix& ref)
	{
		// pos.x : x + ref.x
		// pos.y : y + ref.y
		TwoByTwoMatrix mat(
			this->elem[0][0] + ref.elem[0][0], 
			this->elem[0][1] + ref.elem[0][1],
			this->elem[1][0] + ref.elem[1][0], 
			this->elem[1][1] + ref.elem[1][1]);
		return mat;
	}	

	TwoByTwoMatrix& operator++()
	{
		for (size_t y = 0; y < 2; y++)
		{
			for (size_t x = 0; x < 2; x++)
			{
				this->elem[y][x]++;
			}
		}

		return *this;
	}

	TwoByTwoMatrix& operator++(int)
	{
		for (size_t y = 0; y < 2; y++)
		{
			for (size_t x = 0; x < 2; x++)
			{
				this->elem[y][x]++;
			}
		}

		return *this;
	}

	TwoByTwoMatrix operator*(int time)
	{

		TwoByTwoMatrix mat(
			this->elem[0][0] * time,
			this->elem[0][1] * time,
			this->elem[1][0] * time,
			this->elem[1][1] * time);

		return mat;
	}

	friend TwoByTwoMatrix operator*(int time, TwoByTwoMatrix& ref);

	friend TwoByTwoMatrix& operator--(TwoByTwoMatrix& ref);
	friend TwoByTwoMatrix& operator--(TwoByTwoMatrix& ref, int);
};

TwoByTwoMatrix operator*(int time, TwoByTwoMatrix& ref)
{
	return ref * time;
}

TwoByTwoMatrix& operator--(TwoByTwoMatrix& ref)
{
	for (size_t y = 0; y < 2; y++)
	{
		for (size_t x = 0; x < 2; x++)
		{
			ref.elem[y][x]--;
		}
	}
	return ref;
}

TwoByTwoMatrix& operator--(TwoByTwoMatrix& ref, int)
{
	for (size_t y = 0; y < 2; y++)
	{
		for (size_t x = 0; x < 2; x++)
		{
			ref.elem[y][x]--;
		}
	}
	return ref;
}

int main()
{
	// Point p1(10, 20);
	// Point p2(30, 40);
	// //Point p3 = p1.operator+(p2);
	// Point p3 = p1 + p2;
	// 
	// p1.ShowPosition();
	// p2.ShowPosition();
	// p3.ShowPosition();

	TwoByTwoMatrix mat1(1, 0, 0, 1);
	// TwoByTwoMatrix mat2(0, 2, 2, 0);
	// TwoByTwoMatrix mat3 = mat2 + mat1;
	// 
	// mat1.ShowPosition();
	// std::cout << std::endl;
	// mat2.ShowPosition();
	// std::cout << std::endl;
	// mat3.ShowPosition();
	// std::cout << std::endl;
	// 
	// mat1++;
	// mat1.ShowPosition();
	// std::cout << std::endl;
	// 
	// mat2--;
	// mat2.ShowPosition();
	// std::cout << std::endl;

	TwoByTwoMatrix mat2 = mat1 * 3;
	mat2.ShowPosition();

	return 0;
}