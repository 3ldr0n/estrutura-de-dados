#include "estruturas/Polinomio.h"

int main()
{
    Polinomio a;
    a.insereInicio(Monomio(10, 1));
    a.insereInicio(Monomio(4, 2));
    a.mostra();

    return 0;
}
