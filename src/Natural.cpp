#include "Natural.h"

Natural::Natural(int n):Inteiro(n, '+'){}

Natural::~Natural(){}

std::ostream &operator<<(std::ostream &out, Natural &n) {
	out << n.getValor();
	return out;
}
