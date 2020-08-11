#include <iostream>

using namespace std;

int main()
{
	// 새로운 자료형 : bool 
	// 자료형의 크기 또한 1바이트. 
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