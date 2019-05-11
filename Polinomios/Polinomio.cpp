#include "Polinomio.h"

#include <cmath>

Polinomio::Polinomio():ListaDuplamenteLigada<Monomio>(){}

Polinomio::~Polinomio(){}

void Polinomio::mostra()
{
    DNo<Monomio>* aux = getCabeca();
    while (aux != NULL) {
        std::cout << aux->elem.getCoef() << "x^" <<aux->elem.getExp() << " + ";
        aux = aux->prox;
    }
    std::cout << " 0x^0" << std::endl;
}

double Polinomio::calcula(double x)
{
    DNo<Monomio>* aux_esquerda = getCabeca();
    DNo<Monomio>* aux_direita = getFim();
    double soma = 0;

    while (aux_esquerda != aux_direita && aux_esquerda->prev != aux_direita) {
        soma += aux_esquerda->elem.getCoef() * pow(x, aux_esquerda->elem.getExp());
        soma += aux_direita->elem.getCoef() * pow(x, aux_direita->elem.getExp());

        aux_esquerda = aux_esquerda->prox;
        aux_direita = aux_direita->prev;

        if (aux_esquerda == aux_direita)
            soma += (aux_direita->elem.getCoef() * pow(x, aux_direita->elem.getExp()));
    }

    return soma;
}

void Polinomio::removeMonomio(Monomio e)
{
    for (DNo<Monomio> *aux = getCabeca();aux != NULL;aux = aux->prox) {
        if (aux->elem == e) {
            removeNo(aux);
        }
    }
}
