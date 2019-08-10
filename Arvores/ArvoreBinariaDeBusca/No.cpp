#include "No.h"

No::No() {}

No::No(int valor)
{
	this->valor = valor;
	esquerda = NULL;
	direita = NULL;
}

int No::getValor() const
{
	return valor;
}

void No::setEsquerda(No *no)
{
	esquerda = no;
}

No *No::getEsquerda() const
{
	return esquerda;
}

void No::setDireita(No *no)
{
	direita = no;
}

No *No::getDireita() const
{
	return direita;
}
