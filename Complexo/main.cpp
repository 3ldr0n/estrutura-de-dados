#include "../Complexo.h"

int main()
{
	Complexo n(1, 5);
	Complexo m(2, 4);
	std::cout << n << std::endl;
	std::cout << m << std::endl;
	Complexo soma = n + m;
	Complexo mult = n * m;
	std::cout << soma << std::endl;
	std::cout << mult << std::endl;
	return 0;
}
