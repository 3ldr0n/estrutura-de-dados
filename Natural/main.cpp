#include <iostream>

#include "Natural.h"

int main()
{
	Natural x(23);
	Natural y(9);
	std::cout << (x.suc() + y).getValue() << std::endl;
	std::cout << (x + y).suc().getValue() << std::endl;
	return 0;
}
