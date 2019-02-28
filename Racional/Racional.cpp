#include "Racional.h"

Racional::Racional(int va, int vb, char sinal)
{
	b = vb;
	if (sinal == '-')
		a = -va;
	else
		a = va;
}

Racional::~Racional(){}

float Racional::getA()
{
	return a;
}

float Racional::getB()
{
	return b;
}

Racional Racional::operator+(Racional n)
{
	int va = a * n.getB() + b * n.getA();
	int vb = b * n.getB();
	return Racional(abs(va), abs(vb), (va/vb)<0?'-':'+');
}

Racional Racional::operator-(Racional n)
{
	int va = a * n.getB() - b * n.getA();
	int vb = b * n.getB();
	return Racional(abs(va), abs(vb), (va/vb)<0?'-':'+');
}

Racional Racional::operator*(Racional n)
{
	int va = a * n.getA();
	int vb = b * n.getB();
	return Racional(abs(va), abs(vb), (va/vb)<0?'-':'+');
}

Racional Racional::operator/(Racional n)
{
	int va = a * n.getB();
	int vb = b * n.getA();
	return Racional(abs(va), abs(vb), (va/vb)<0?'-':'+');
}

std::ostream &operator<<(std::ostream &out, Racional &n)
{
	out << n.getA() << "/" << n.getB();
	return out;
}
