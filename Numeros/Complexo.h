#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>
#include <stdlib.h>

class Complexo {
private:
	double real;
	double imaginario;
public:
	Complexo();
	Complexo(double _real, char sinal_real, double _imaginario, char sinal_imaginario);
	~Complexo();
	double getReal();
	double getImaginario();
	Complexo operator+(Complexo n);
	Complexo operator-(Complexo n);
	Complexo operator*(Complexo n);
	friend std::ostream &operator<<(std::ostream &out, Complexo &n);
};

#endif
