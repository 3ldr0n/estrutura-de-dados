#ifndef NATURAL_H
#define NATURAL_H

#include "Inteiro.h"

class Natural:public Inteiro {
public:
	Natural();
	Natural(int n);
	~Natural();
    Inteiro pred();
	friend std::ostream &operator<<(std::ostream &out, Natural &n);
};

#endif
