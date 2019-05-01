#include "estruturas/Polinomio.h"
#include <cmath>

Polinomio::Polinomio():ListaLigada<Monomio>(){}

Polinomio::~Polinomio(){}

void Polinomio::mostra()
{
    No<Monomio>* aux = getCabeca();
    while (aux != NULL) {
        std::cout << aux->elem.getCoef() << "x^" <<aux->elem.getExp() << std::endl;
        aux = aux->prox;
    }
}

double Polinomio::calcula(double x)
{
    No<Monomio>* aux = getCabeca();
    double soma = 0;
    while (aux != NULL) {
        soma += aux->elem.getCoef() * pow(x, aux->elem.getExp());
        aux = aux->prox;
    }

    return soma;
}
