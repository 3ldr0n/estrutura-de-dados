#include <iostream>

class Inteiro {
private:
	int value;
public:
	Inteiro(int n);
	~Inteiro();
	int getValue();
	Inteiro suc();
	Inteiro sub();
	Inteiro soma(Inteiro n);
	Inteiro subt(Inteiro n);
	Inteiro mult(Inteiro n);
};
