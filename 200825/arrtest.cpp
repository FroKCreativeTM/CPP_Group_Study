#include "MyArray.h"

// new, delete 연산자 오버로딩 가능!
// 알아서 찾아보셈

int main()
{
	MyArray arr(5);
	
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i * 10;
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	arr[5] = 40;
}