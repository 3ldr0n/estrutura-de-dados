#include "Racional.h"

Racional::Racional(double v, char sinal):Real(v, sinal)
{}

Racional::~Racional(){}

std::ostream &operator<<(std::ostream &out, Racional &n)
{
	out << n.getValor();
	return out;
}
