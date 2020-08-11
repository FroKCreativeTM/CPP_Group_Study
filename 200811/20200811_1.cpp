#include <iostream>

using namespace std;

int main()
{
	// read only : 읽을 수만 있다. 즉 더 쓰거나 아니면 수정할 수 없다.
	// 상수다.
	// const int age = 10;
	// age = 20;
	int age = 10;
	const int cn = age;

	// 포인터 상수!
	const int* pcn = &age;
	// 주소값이 포인터 크기만큼 이동한다.(포인터 크기 32비트 : 4바이트, 64비트 : 8바이트)
	// pcn = pcn + sizeof(pcn); 
	// 상수 포인터
	int* const cpn = &age;
	*cpn = 20;
	// cpn = cpn + sizeof(cpn);
	const int* const cpcn = &age;



	return 0;
}