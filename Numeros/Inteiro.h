#ifndef INTEIRO_H
#define INTEIRO_H

#include "Racional.h"

class Inteiro:public Racional {
public:
	Inteiro();
	Inteiro(int n, char sinal);
	~Inteiro();
	int getValor();
	Inteiro suc(); 
	Inteiro pred();
	friend std::ostream &operator<<(std::ostream &out, Inteiro &n);
};

#endif
