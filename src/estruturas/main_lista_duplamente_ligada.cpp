#include "ListaLigada.cpp"

int main()
{
    ListaLigada<int> lista;
    lista.insereInicio(4);
    lista.insereInicio(5);
    lista.insereInicio(6);
    lista.insereInicio(7);
    lista.insereFinal(3);
    lista.insereFinal(2);
    lista.insereFinal(1);
    lista.insereInicio(8);
    lista.removeInicio();
    lista.removeInicio();

    lista.print();

    return 0;
}
