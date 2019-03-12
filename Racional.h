#ifndef RACIONAL_H
#define RACIONAL_H

#include "Real.h"

class Racional:public Real {
public:
	Racional(double v, char sinal);
	~Racional();
	friend std::ostream &operator<<(std::ostream &out, Racional &n);
};

#endif
