#ifndef REAL_H
#define REAL_H

#include "Complexo.h"

class Real:public Complexo {
public:
	Real();
	Real(double v, char sinal);
	~Real();
	double getValor();
	Real operator/(Real n);
	friend std::ostream &operator<<(std::ostream &out, Real &n);
};

#endif
