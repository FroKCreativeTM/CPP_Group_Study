#include <iostream>
using namespace std;

void test(int t)
{
	t = 20;
}

void test_by_address(int* p)
{
	*p = 20;
}

int main()
{
	// 스택 공간에 저장
	int n = 10;
	float f = 20.0f;
	double d = 20.2;

	test(n);
	cout << n << endl;

	test_by_address(&n);
	cout << n << endl;

	// 힙 공간
	// 형 변환(type casting)
	int* p = (int*)malloc(sizeof(int));
	int* np = new int;

	// 할당받았던 것을 다시 운영체제에게 돌려준다.
	// 이게 없으면 게임을 예시로 들면, 리소스를 있는데로 할당하고
	// 그걸 안 푼다. 메모리 누수라는 것이 생긴다.
	// 쓰지도 않는데 계속 이 프로그램은 그 메모리를 가지고 있는 것이다.
	free(p);
	delete np;

	return 0;
}