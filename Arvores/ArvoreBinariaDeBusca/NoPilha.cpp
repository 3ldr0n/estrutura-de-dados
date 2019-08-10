#include "NoPilha.h"

NoPilha::NoPilha(No *no)
{
	this->no = no;
	this->prox = NULL;
}

No *NoPilha::getNo() const
{
	return no;
}

void NoPilha::setProx(NoPilha *no)
{
	prox = no;
}

NoPilha * NoPilha::getProx() const
{
	return prox;
}
