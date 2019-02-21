#include <iostream>

#include "Inteiro.hpp"

int main()
{
	Inteiro n(2);
	std::cout << n.mult(3).getValue() << std::endl;
	return 0;
}
