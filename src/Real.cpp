#include "Real.h"

Real::Real(double v, char sinal):Complexo(v,sinal,0,'-')
{}

Real::~Real(){}

double Real::getValor()
{
	return getReal();
}

Real Real::operator/(Real n)
{
	double div = getReal() / n.getValor();
	return Real(std::abs(div), div<0?'-':'+');
}

std::ostream &operator<<(std::ostream &out, Real &n)
{
	out << n.getValor();
	return out;
}
