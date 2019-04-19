#include "numeros/Racional.h"

Racional::Racional():Real(){}

Racional::Racional(int a,  int b, char sinal):Real(a/(double)b, sinal)
{}

Racional::~Racional(){}

std::ostream &operator<<(std::ostream &out, Racional &n)
{
	out << n.getValor();
	return out;
}
