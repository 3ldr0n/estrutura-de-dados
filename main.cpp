#include "Natural.h"

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
	Complexo c(1, '+', 2, '-');
	Complexo d(12.123, '+', 9, '+');

	std::cout << "Natural x: " << x << std::endl;
	std::cout << "Natural y: " << y << std::endl;
	std::cout << "Inteiro n: " << n << std::endl;
	std::cout << "Inteiro m: " << m << std::endl;
	std::cout << "Racional p: " << p << std::endl;
	std::cout << "Racional q: " << q << std::endl;
	std::cout << "Real a: " << a << std::endl;
	std::cout << "Real b: " << b << std::endl;
	std::cout << "Complexo c: " << c << std::endl;
	std::cout << "Complexo d: " << d << std::endl;

<<<<<<< HEAD
	Complexo soma = x * y;
	Complexo sub = b - q;
	Complexo mult = n * m;
	Complexo div = a / p;
	Complexo soma_complexos = c + d;
	
	std::cout << "\nTestes" << std::endl;
	std::cout << "x * y: " << soma.getReal() << std::endl;
	std::cout << "b - q: " << sub.getReal() << std::endl;
	std::cout << "n * m: " << mult.getReal() << std::endl;
	std::cout << "a / p: " << div.getReal() << std::endl;
	std::cout << "c + d: " << soma_complexos << std::endl;
=======
	Complexo mult = p * y;
	std::cout << mult.getReal() << std::endl;
>>>>>>> 3cad66b93eb6073586c50efb9d179e190bd9d899

	return 0;
}
