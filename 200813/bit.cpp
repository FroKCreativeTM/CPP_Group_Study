#include <iostream>

int main()
{
	// 31(-2^31 ~ 2^31)�������� ���� ���� ����!
	int buf;
	// buf size ~ 255
	std::cout << "���� �󸶳� : ";
	std::cin >> buf;

	/* ���⿡ ���� */
	if (buf & 0b00000001)
	{

	}

	return 0;
}