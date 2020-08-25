#include <iostream>
#include <cstring>

#pragma warning(disable:4996)

template <typename T>
T add(T a, T b)
{
	return a + b;
}

template<>
char* add<char*>(char* str, char* str2)
{
	return strcat(str, str2);
}

template <typename T, int MaxIdx>
class Test
{
private : 
	T test;
	int maxIdx = MaxIdx;
};

int main()
{
	char message1[15] = "Hello ";
	char message2[15] = "world!";

	std::cout << add<int>(10, 20) << std::endl;
	std::cout << add<char*>(message1, message2) << std::endl;

	Test<int, 100> testClass;

	return 0;
}