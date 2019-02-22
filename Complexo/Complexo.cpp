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

Complexo Complexo::soma(float _real, float _imaginario) {
	return Complexo(0, 0);
}
