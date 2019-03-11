#ifndef REAL_H
#define REAL_H

#include <iostream>
#include <stdlib.h>

class Real {
private:
	double valor;
public:
	Real(double v, char sinal);
	~Real();
	double getValor();
	Real operator+(Real n);
	Real operator-(Real n);
	Real operator*(Real n);
	Real operator/(Real n);
	friend std::ostream &operator<<(std::ostream &out, Real &n);
};

#endif
