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
    v.agrupamento(c)
        .agrupamento(x)
        .print();

    return 0;
}
