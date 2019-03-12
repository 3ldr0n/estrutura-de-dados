#include "Inteiro.h"

Inteiro::Inteiro(int n, char  sinal):Racional(n, sinal){}

Inteiro::~Inteiro(){}

int Inteiro::getValor()
{
	return (int)Racional::getValor();
}

Inteiro Inteiro::suc()
{
	int v = getValor();
	Inteiro n(abs(v + 1), v<0?'-':'+');
	return n;
}

Inteiro Inteiro::pred()
{
	int v = getValor();
	Inteiro n((v - 1), v<0?'-':'+');
	return n;
}

std::ostream &operator<<(std::ostream &out, Inteiro &n)
{
	out << n.getValor();
	return out;
}
