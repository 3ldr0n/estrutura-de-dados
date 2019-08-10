#ifndef TADPILHA_H
#define TADPILHA_H

#include "NoPilha.h"

class Pilha {
private:
	NoPilha *topo;
public:
	Pilha();
	bool vazia();
	void push(No *no);
	NoPilha *pop();
};

#endif
