#include "../numeros/Complexo.cpp"
#include "../numeros/Real.cpp"
#include "../numeros/Racional.cpp"
#include "../numeros/Inteiro.cpp"
#include "../numeros/Natural.cpp"

#include "Vetor.cpp"

int main()
{
    Vetor<int> v(5);
    v.insere(1, 0);
    v.insere(2, 1);
    v.insere(3, 2);
    v.insere(4, 3);
    v.insere(5, 4);

    Vetor<int> c(5);
    c.insere(6, 0);
    c.insere(7, 1);
    c.insere(8, 2);
    c.insere(9, 3);
    c.insere(10, 4);

    Vetor<int> x(3);
    x.insere(11, 0);
    x.insere(12, 1);
    x.insere(13, 2);

    v.print();
    c.print();
    x.print();

    v.agrupamento(c);
    v.agrupamento(x);
    v.print();

    Vetor<Natural> b(5);
    b.insere(Natural(1), 0);
    b.insere(Natural(2), 1);
    b.insere(Natural(3), 2);
    b.insere(Natural(4), 3);
    b.insere(Natural(5), 4);

    return 0;
}
