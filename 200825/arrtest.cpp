#include "MyArray.h"

// new, delete ������ �����ε� ����!
// �˾Ƽ� ã�ƺ���

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