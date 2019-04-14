#include "Vetor.h"

template <typename T>
Vetor<T>::Vetor(int t)
{
    v = new T[t];
    if (v == NULL)
        throw new std::string("Memória insuficiente.");
    tam = t;
}

template <typename T>
Vetor<T>::~Vetor(){
    delete v;
}

template <typename T>
int Vetor<T>::tamanho()
{
    return tam;
}

template <typename T>
T Vetor<T>::elemento(int i)
{
    if (i < 0 || i >= tam)
        throw new std::string("Indice invalido.");

    return v[i];
}

template <typename T>
bool Vetor<T>::procura(T elem)
{
    for (int i = 0;i < tam;i++) {
        if (v[i] == elem)
            return true;
    }
    
    return false;
}

template <typename T>
void Vetor<T>::insere(T elem, int i)
{
    if (i < 0 || i >= tam)
        throw new std::string("Indice invalido.");

    v[i] = elem;
}

template <typename T>
void Vetor<T>::remove(int i)
{
    if (i < 0 || i >= tam)
        throw new std::string("Indice invalido.");

    for (int j = 0;j < tam - 1;j++)
        v[j] = v[j + 1];

    v[tam - 1] = NULL;
}

template <typename T>
Vetor<T> Vetor<T>::agrupamento(Vetor<T> ve)
{
    Vetor vs(tam + ve.tamanho());

    int i;
    for (i = 0; i < tam;i++) {
        vs.insere(v[i], i);
    }

    for (int j = 0; i < vs.tamanho();j++) {
        vs.insere(ve.elemento(j), i);
        i++;
    }

    return vs;
}

template <typename T>
void Vetor<T>::print()
{
    for (int i = 0;i < tam;i++)
        std::cout << v[i] << " ";

    std::cout << std::endl;
}
