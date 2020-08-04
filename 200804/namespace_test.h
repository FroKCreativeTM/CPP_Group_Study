#pragma once

#include <iostream>

namespace Cha
{
	int myNum;

	void Test()
	{
		std::cout << "Cha namespace" << std::endl;
	}

	class cout
	{

	};
}

namespace Moon
{
	int myNum;

	void Test()
	{
		std::cout << "Moon namespace" << std::endl;
	}
}

namespace Lee
{
	int myNum;

	void Test()
	{
		std::cout << "Lee namespace" << std::endl;
	}
}