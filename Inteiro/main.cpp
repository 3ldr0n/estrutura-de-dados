#include "Inteiro.h"

int main()
{
	Inteiro x(9);
	Inteiro y(-19);
	std::cout << (x.pred() - y).getValue() << std::endl;
	std::cout << (x - y).pred().getValue() << std::endl;
	std::cout << x;
	return 0;
}
