#include <iostream>

using namespace std;

// test라는 집은 다르기 때문
// void test(int* ptr)
// {
// 	// ptr의 주소값이 가지고 있는 자료
// 	*ptr = 20;
// }

// main이란 집과
int main()
{
	// int* ptr;			// 포인터 타입
	// int a = 10;
	// cout << a << endl;
	// // ptr = a;	// 10을 넘겨준 것
	// ptr = &a;	// 정확하게 a의 주소값을 알려준 것(가리킨다.)
	// // test(&a);
	// test(ptr);
	// cout << a << endl;

	int a = 10;
	int b = 20;
	int* p1;
	int* p2;

	p1 = &a;
	p2 = &b;
	 
	(*p1)--;
	p1 = &b;
	p2 = &a;

	cout << *p1 << " " << *p2 << endl;
}