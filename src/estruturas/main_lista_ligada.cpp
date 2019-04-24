#include "ListaLigada.cpp"

int main()
{
    ListaLigada<int> lista;
    lista.insereInicio(4);
    lista.insereInicio(5);
    lista.insereInicio(6);
    lista.insereInicio(7);
    lista.insereInicio(8);
    lista.insereInicio(9);
    lista.removeInicio();
    lista.removeInicio();

    lista.print();

    return 0;
}
