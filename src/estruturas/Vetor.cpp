#include "estruturas/Vetor.h"

template <class T>
Vetor<T>::Vetor(int t)
{
    v = new T[t];
    if (v == NULL)
        throw new std::string("Memória insuficiente.");
    tam = t;
}

template <class T>
Vetor<T>::~Vetor(){
    delete v;
}

template <class T>
int Vetor<T>::tamanho()
{
    return tam;
}

template <class T>
T Vetor<T>::operator[](int i)
{
    if (i < 0 || i >= tam)
        throw new std::string("Indice invalido.");

    return v[i];
}

template <class T>
bool Vetor<T>::procura(T elem)
{
    for (int i = 0;i < tam;i++) {
        if (v[i] == elem)
            return true;
    }

    return false;
}

template <class T>
void Vetor<T>::insere(T elem, int i)
{
    if (i < 0 || i >= tam)
        throw new std::string("Indice invalido.");

    v[i] = elem;
}

template <class T>
void Vetor<T>::remove(int i)
{
    if (i < 0 || i >= tam)
        throw new std::string("Indice invalido.");

    for (int j = 0;j < tam - 1;j++)
        v[j] = v[j + 1];

    v[tam - 1] = NULL;
}

template <class T>
void Vetor<T>::agrupamento(Vetor<T> ve)
{
    Vetor<T> vs(tam + ve.tamanho());

    int i;
    for (i = 0; i < tam;i++) {
        vs.insere(v[i], i);
    }

    for (int j = 0; i < vs.tamanho();j++) {
        vs.insere(ve[j], i);
        i++;
    }

    delete v;
    v = new T[vs.tamanho()];
    tam = vs.tamanho();

    for (i = 0;i < vs.tamanho();i++) {
        v[i] = vs[i];
    }
}

template <class T>
void Vetor<T>::print()
{
    for (int i = 0;i < tam;i++)
        std::cout << v[i] << " ";

    std::cout << std::endl;
}
