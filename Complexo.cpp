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
	float parte_real = real + n.getReal();
	float parte_imaginaria = imaginario + n.getImaginario();
	return Complexo(parte_real, parte_imaginaria);
}

Complexo Complexo::operator-(Complexo n) {
	float parte_real = real - n.getReal();
	float parte_imaginaria = imaginario - n.getImaginario();
	return Complexo(parte_real, parte_imaginaria);
}

Complexo Complexo::operator*(Complexo n){
	float r = (real * n.getReal() - imaginario * n.getImaginario());
	float i = (real * n.getImaginario() + imaginario * n.getReal());
	return Complexo(r, i);
}

std::ostream &operator<<(std::ostream &out, Complexo &n)
{
	out << n.getReal() << " + " << n.getImaginario() << "i";
	return out;
}
