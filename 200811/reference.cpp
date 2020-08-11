#include <iostream>

using namespace std;

void test(int& ref)
{
	ref = 40;
}

int main()
{
	const int cn = 10;
	const int& ref = cn;
	// int& ref2;
	// int& ref3 = nullptr;

	return 0;
}