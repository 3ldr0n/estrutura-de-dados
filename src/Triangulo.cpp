#include "Triangulo.h"

Triangulo::Triangulo(float va, float vb, float vc)
{
    base = va;
    altura = vb;
    c = vc;
    area = calcularArea();
}

Triangulo::~Triangulo(){}

float Triangulo::getBase()
{
    return base;
}

float Triangulo::getAltura()
{
    return altura;
}

float Triangulo::getC()
{
    return c;
}

float Triangulo::calcularArea()
{
    return (base * altura) / 2;
}

float Triangulo::getArea()
{
    return area;
}

float Triangulo::operator+(Triangulo t)
{
    float soma = area + t.getArea();
    return soma;
}

std::ostream &operator<<(std::ostream &out, Triangulo &t)
{
	out << "Base: " << t.getBase();
	out << ",Altura:" << t.getAltura();
	out << ",Lado C:" << t.getC();
	return out;
}
