#include <iostream>

int main()
{
	// 31(-2^31 ~ 2^31)개까지의 버프 관리 가능!
	int buf;
	// buf size ~ 255
	std::cout << "버프 얼마나 : ";
	std::cin >> buf;

	/* 여기에 구현 */
	if (buf & 0b00000001)
	{

	}

	return 0;
}