#include <iostream>

#include "../Racional.h"

int main()
{
	Racional n(1, 2, '+');
	Racional m(2, 9, '-');
	Racional x(9, 2, '-');
	std::cout << n << std::endl;
	std::cout << m << std::endl;
	Racional soma = n + m;
	Racional sub = n - m;
	Racional mult = n * m;
	Racional div = n / m;
	std::cout << soma << std::endl;
	std::cout << sub << std::endl;
	std::cout << mult << std::endl;
	std::cout << div << std::endl;
	return 0;
}
