#include "Real.h"

Real::Real(double v, char sinal)
{
	if (sinal == '-')
		valor = -v;
	else
		valor = v;
}

Real::~Real(){}

double Real::getValor()
{
	return valor;
}

Real Real::operator+(Real n)
{
	double soma = valor + n.getValor();
	return Real(abs(soma), soma<0?'-':'+');
}

Real Real::operator-(Real n)
{
	double sub = valor - n.getValor();
	return Real(abs(sub), sub<0?'-':'+');
}

Real Real::operator*(Real n)
{
	double mult = valor * n.getValor();
	return Real(abs(mult), mult<0?'-':'+');
}

Real Real::operator/(Real n)
{
	double div = valor / n.getValor();
	return Real(abs(div), div<0?'-':'+');
}

std::ostream &operator<<(std::ostream &out, Real &n)
{
	out << n.getValor();
	return out;
}
