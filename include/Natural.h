#ifndef NATURAL_H
#define NATURAL_H

#include "Inteiro.h"

class Natural:public Inteiro {
public:
	Natural(int n);
	~Natural();
	friend std::ostream &operator<<(std::ostream &out, Natural &n);
};

#endif
