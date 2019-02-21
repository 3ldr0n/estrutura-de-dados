#include <iostream>

#include "Natural.hpp"

int main()
{
	Natural n(23);
	std::cout << n.mult(3).suc().getValue() << std::endl;
	return 0;
}
