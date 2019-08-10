#ifndef NO_H
#define NO_H

#include <iostream>

class No {
private:
	int valor;
	No *esquerda;
	No *direita;
public:
	No();
	No(int vl);
	int getValor() const;
	void setValor(int vl);
	void setEsquerda(No * no);
	No *getEsquerda() const;
	void setDireita(No * no);
	No *getDireita() const;
};

#endif
