#include "../Inteiro.h"

int main()
{
	Inteiro x(9, '+'); 
	Inteiro y(19, '-');
	Inteiro axioma0 = (Inteiro) x.pred() - y;
	Inteiro axioma1 = (Inteiro) (x - y);
	std::cout << axioma0 << std::endl;
	std::cout << axioma1 << std::endl;
	return 0;
}
