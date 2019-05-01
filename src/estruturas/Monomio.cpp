#include "estruturas/Monomio.h"

Monomio::Monomio(double coef, int exp)
{
    this->coef = coef;
    this->exp = exp;
}

Monomio::Monomio(){}

Monomio::~Monomio(){}

double Monomio::getCoef()
{
    return coef;
}

int Monomio::getExp()
{
    return exp;
}
