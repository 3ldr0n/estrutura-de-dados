#include "Complexo.h"

Complexo::Complexo(double _real, char sinal_real, double _imaginario, char sinal_imaginario) {
	if (sinal_real == '+')
		real = _real;
	else
		real = -_real;

	if (sinal_imaginario == '+')
		imaginario = _imaginario;
	else
		imaginario = -_imaginario;
}

Complexo::~Complexo() {}

double Complexo::getReal()
{
	return real;
}

double Complexo::getImaginario()
{
	return imaginario;
}

Complexo Complexo::operator+(Complexo n)
{
	double parte_real = real + n.getReal();
	double parte_imaginaria = imaginario + n.getImaginario();
	return Complexo(std::abs(parte_real),
					parte_real<0?'-':'+',
					std::abs(parte_imaginaria),
					parte_imaginaria<0?'-':'+');
}

Complexo Complexo::operator-(Complexo n)
{
	double parte_real = real - n.getReal();
	double parte_imaginaria = imaginario - n.getImaginario();
	return Complexo(std::abs(parte_real),
					parte_real<0?'-':'+',
					std::abs(parte_imaginaria),
					parte_imaginaria<0?'-':'+');
}

Complexo Complexo::operator*(Complexo n)
{
	double r = (real * n.getReal() - imaginario * n.getImaginario());
	double i = (real * n.getImaginario() + imaginario * n.getReal());
	return Complexo(std::abs(r), r<0?'-':'+',
					std::abs(i), i<0?'-':'+');
}

std::ostream &operator<<(std::ostream &out, Complexo &n)
{
	out << n.getReal() << " + " << n.getImaginario() << "i";
	return out;
}
