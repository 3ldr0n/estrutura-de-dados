#include "Natural.h"
#include "Real.h"

int main()
{
	Natural x(23);
	Natural y(9);
	Inteiro n(13, '-');
	Inteiro m(16, '+');
	Racional p(1, 2, '-');
	Racional q(3, 4, '+');
	Real a(5.123123123, '+');
	Real b(3.141592653, '+');

	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << n << std::endl;
	std::cout << m << std::endl;
	std::cout << p << std::endl;
	std::cout << q << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	Real mult = p * y;
	std::cout << mult << std::endl;

	return 0;
}
