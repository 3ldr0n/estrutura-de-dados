#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>

class Complexo {
private:
	double real;
	double imaginario;
public:
	Complexo(double _real, double _imaginario);
	~Complexo();
	double getReal();
	double getImaginario();
	Complexo operator+(Complexo n);
	Complexo operator-(Complexo n);
	Complexo operator*(Complexo n);
	friend std::ostream &operator<<(std::ostream &out, Complexo &n);
};

#endif
