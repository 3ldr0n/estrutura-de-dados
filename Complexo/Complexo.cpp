#include "Complexo.h"

Complexo::Complexo(float _real, float _imaginario) {
	real = _real;
	imaginario = _imaginario;
}

Complexo::~Complexo() {}

float Complexo::getReal() {
	return real;
}

float Complexo::getImaginario() {
	return imaginario;
}

Complexo Complexo::operator+(Complexo n) {
	return Complexo(0, 0);
}

Complexo Complexo::operator-(Complexo n) {
	return Complexo(0, 0);
}

std::ostream &operator<<(std::ostream &out, Complexo &n)
{
	out << n.getReal() << " + " << n.getImaginario() << "i";
	return out;
}
