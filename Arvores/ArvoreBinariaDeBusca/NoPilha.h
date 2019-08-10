#ifndef NOPILHA_H
#define NOPILHA_H

#include "No.h"

class NoPilha {
private:
	No *no;
	NoPilha * prox;
public:
	NoPilha(No *no);
	No *getNo() const;
	NoPilha * getProx() const;
	void setProx(NoPilha * no);
};

#endif
