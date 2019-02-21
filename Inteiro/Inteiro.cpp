#include "Inteiro.h"

Inteiro::Inteiro(int n)
{
	value = n;
}

Inteiro::~Inteiro(){}

int Inteiro::getValue()
{
	return value;
}

Inteiro Inteiro::suc()
{
	Inteiro n(value + 1);
	return n;
}

Inteiro Inteiro::pred()
{
	Inteiro n(value - 1);
	return n;
}

Inteiro Inteiro::operator+(Inteiro n)
{
	Inteiro s(value + n.getValue());
	return s;
}

Inteiro Inteiro::operator-(Inteiro n)
{
	Inteiro s(value - n.getValue());
	return s;
}

Inteiro Inteiro::mult(Inteiro n)
{
	if (n.getValue() == 0)
		return Inteiro(0);
	else if (n.getValue() == 1)
		return Inteiro(value);
	else
		return Inteiro(value + mult(n.getValue() - 1).getValue());
}
