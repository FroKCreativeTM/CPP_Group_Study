#include <iostream>

using namespace std;

int main()
{
	// ���ο� �ڷ��� : bool 
	// �ڷ����� ũ�� ���� 1����Ʈ. 
	bool b = true;
	bool test = true + false;	// 1 + 0
	int playerHP = 100;

	while (b)
	{
		playerHP -= 10;
		cout << playerHP << endl; 
		if (playerHP == 0)
		{
			b = false;
		}
	}

	return 0;
}