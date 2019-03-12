#include "Complexo.h"

Complexo::Complexo(double _real, double _imaginario) {
	real = _real;
	imaginario = _imaginario;
}

Complexo::~Complexo() {}

double Complexo::getReal() {
	return real;
}

double Complexo::getImaginario() {
	return imaginario;
}

Complexo Complexo::operator+(Complexo n) {
	double parte_real = real + n.getReal();
	double parte_imaginaria = imaginario + n.getImaginario();
	return Complexo(parte_real, parte_imaginaria);
}

Complexo Complexo::operator-(Complexo n) {
	double parte_real = real - n.getReal();
	double parte_imaginaria = imaginario - n.getImaginario();
	return Complexo(parte_real, parte_imaginaria);
}

Complexo Complexo::operator*(Complexo n){
	double r = (real * n.getReal() - imaginario * n.getImaginario());
	double i = (real * n.getImaginario() + imaginario * n.getReal());
	return Complexo(r, i);
}

std::ostream &operator<<(std::ostream &out, Complexo &n)
{
	out << n.getReal() << " + " << n.getImaginario() << "i";
	return out;
}
