#include "numeros/Natural.h"

Natural::Natural(int n):Inteiro(n, '+'){}

Natural::~Natural(){}

Inteiro Natural::pred()
{
    if (getValor() == 0)
        throw std::string("Predecessor não definido");

    return Inteiro::pred();
}

std::ostream &operator<<(std::ostream &out, Natural &n) {
	out << n.getValor();
	return out;
}
