#include "Pilha.h"

Pilha::Pilha()
{
	topo = NULL;
}

bool Pilha::vazia()
{
	return topo == NULL;
}

void Pilha::push(No *no)
{
	NoPilha *auxNo = new NoPilha(no);
	if (!vazia())
		auxNo->setProx(topo);

	topo = auxNo;
}

NoPilha *Pilha::pop()
{
	if (vazia())
		return NULL;

	NoPilha *noRetorno = topo;
	topo = noRetorno->getProx();
	return noRetorno;
}
