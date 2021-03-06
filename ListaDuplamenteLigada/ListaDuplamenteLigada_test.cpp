#include "ListaDuplamenteLigada.cpp"

int main()
{
    ListaDuplamenteLigada<int> lista;
    lista.insereInicio(4);
    lista.insereInicio(5);
    lista.insereInicio(6);
    lista.insereInicio(7);

    lista.insereFinal(3);
    lista.insereFinal(2);

    lista.removeInicio();

    lista.removeFinal();

    lista.print();

    lista.troca();

    lista.print();

    DNo<int> *e = lista.getCabeca();
    lista.insereNoAntes(e);

    e = lista.getFim();

    lista.insereNoDepois(e);

    lista.removeNo(e);

    lista.removeNo(e);

    lista.print();

    return 0;
}
