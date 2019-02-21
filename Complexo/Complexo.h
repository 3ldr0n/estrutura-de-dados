#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo {
private:
	float real;
	float imaginario;
public:
	Complexo(float _real, float _imaginario);
	~Complexo();
	float getReal();
	float getImaginario();
	Complexo operator+(float _real, float _imaginario);
};

#endif
