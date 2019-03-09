#ifndef RACIONAL_H
#define RACIONAL_H

#include <iostream>

class Racional {
private:
	int a;
	int b;
	char sinal;
public:
	Racional(int va, int vb, char sinal);
	~Racional();
	int getA();
	int getB();
	Racional operator+(Racional n);
	Racional operator-(Racional n);
	Racional operator*(Racional n);
	Racional operator/(Racional n);
	friend std::ostream &operator<<(std::ostream &out, Racional &n);
};

#endif
