#ifndef RACIONAL_H
#define RACIONAL_H

#include "Real.h"

class Racional:public Real {
public:
	Racional(int a, int b, char sinal);
	~Racional();
	friend std::ostream &operator<<(std::ostream &out, Racional &n);
};

#endif
