#ifndef INTEIRO_H
#define INTEIRO_H

#include <iostream>

class Inteiro {
private:
	int value;
public:
	Inteiro(int n);
	~Inteiro();
	int getValue();
	Inteiro suc(); 
	Inteiro pred();
	Inteiro operator+(Inteiro n);
	Inteiro operator-(Inteiro n);
	Inteiro mult(Inteiro n);
	friend std::ostream &operator<<(std::ostream &out, Inteiro &n);
};


#endif
