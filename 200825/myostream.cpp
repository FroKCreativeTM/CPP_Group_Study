#include "ostream.h"

int main()
{
	mystd::cout << "Test" << mystd::endl;
	mystd::cout.operator<<("Test").operator<<(mystd::endl);
	// mystd::cout.operator<<(mystd::endl);

	return 0;
}