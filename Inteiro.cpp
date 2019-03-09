#include "Inteiro.h"

Inteiro::Inteiro(int n, char  sinal):Racional(n, 1, sinal){}

Inteiro::~Inteiro(){}

int Inteiro::getValor()
{
	return getA();
}

Inteiro Inteiro::suc()
{
	int v = getA();
	Inteiro n(abs(v + 1), v<0?'-':'+');
	return n;
}

Inteiro Inteiro::pred()
{
	int v = getA();
	Inteiro n((v - 1), v<0?'-':'+');
	return n;
}

std::ostream &operator<<(std::ostream &out, Inteiro &n)
{
	out << n.getValor();
	return out;
}
