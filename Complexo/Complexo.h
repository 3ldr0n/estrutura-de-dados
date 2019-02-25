#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>

class Complexo {
private:
	float real;
	float imaginario;
public:
	Complexo(float _real, float _imaginario);
	~Complexo();
	float getReal();
	float getImaginario();
	Complexo operator+(Complexo n);
	Complexo operator-(Complexo n);
	Complexo operator*(Complexo n);
	friend std::ostream &operator<<(std::ostream &out, Complexo &n);
};

#endif
