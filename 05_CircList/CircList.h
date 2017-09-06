#ifndef CIRCLIST_H
#define CIRCLIST_H

#include "Nodo.h"

template<class T>
class CircList {
private:
    Nodo <T> *inicio;
public:
    CircList();

    CircList(const CircList<T> &);

    ~CircList();

    bool esVacia();

    int getTamanio();

    void insertar(int pos, T dato);

    void insertarUltimo(T dato);


};

template<class T>
CircList<T>::CircList() {
    inicio = NULL;
}

template<class T>
CircList<T>::Lista() {
    inicio = NULL;
}

template<class T>
bool CircList<T>::esVacia() {
    return inicio == NULL;
}

template<class T>
int CircList<T>::getTamanio() {
    Nodo <T> *aux = inicio;
    int cont = 0;

    if (esVacia())
        return 0;

    do {
        cont++;
        aux = aux->getNext();
    } while (aux != inicio);

    return cont;
}

template<class T>
void CircList<T>::insertar(int pos, T dato) {
    int cont = 0;
    Nodo <T> *aux = inicio;

    if (pos == 0) {
        Nodo <T> *nn = new Nodo<T>(dato, inicio);
        inicio = nn;
        return;
    }
    //considerar alguna otra sit?
    do {
        cont++;
        aux = aux->getNext();
    } while (aux != inicio);

    if (aux == inicio)
        throw 1;

    Nodo <T> *nn = new Nodo<T>(dato, aux->getNext());
    aux->setNext(nn);
}

template<class T>
void Lista<T>::insertarUltimo(T dato) {
    if (inicio == NULL) {
        Nodo <T> *nn = new Nodo<T>(dato, nn);
        return;
    }
    /// en algun caso no se puede, asegurar que haya un aux.getnext

    Nodo <T> *aux = inicio;
    do
        aux = aux->getNext();
    while (aux != inicio);
    Nodo <T> *nn = new Nodo<T>(dato, inicio);
    aux->setNext(nn);
}


#endif //CIRCLIST_H