#ifndef CIRCLIST_H
#define CIRCLIST_H

#include "../Lista/Nodo.h"

template<class T>
class CircList {
private:
    Nodo<T> *puntero;
public:
    CircList();

    CircList(const CircList<T> &);

    ~CircList();

    bool esVacia();

    int getTamanio();

    void insertar(T dato);

    void remover();

    void avanzar();

    T getdato();

    void remplazar(T dato);

    void vaciar();
};

template<class T>
CircList<T>::CircList() {
    puntero = NULL;
}

template <class T>
CircList<T>::CircList(const CircList<T> &) {

}

template<class T>
CircList<T>::~CircList() {
    vaciar();
}

template<class T>
bool CircList<T>::esVacia() {
    return puntero == NULL;
}

template<class T>
void CircList<T>::insertar(T dato) {
    if (NULL == puntero) {
        puntero = new Nodo<T>(dato);
        puntero->setNext(puntero);
        return;
    }

//    puntero->setNext(new Nodo<T>(dato, puntero->getNext()));  *chanchurria*
    Nodo<T> *tmp = new Nodo<T>(dato, puntero->getNext());
    puntero->setNext(tmp);
    puntero = puntero->getNext();
}

template <class T>
void CircList<T>::avanzar() {
    if (puntero != NULL)
        puntero = puntero->getNext();
}

template <class T>
void CircList<T>::remover() {
    Nodo<T> *aux = puntero;

    if (NULL == puntero)
        return;

    while (aux->getNext() != puntero)
        aux = aux->getNext();

    if (aux == puntero) {
        delete puntero;
        puntero = NULL;
        return;
    }

    aux->setNext(puntero->getNext());
    delete puntero;
    puntero = aux->getNext();           // queda apuntando al siguiente
}

template <class T>
T CircList<T>::getdato() {
    if (puntero == NULL)
        throw 1;

    return puntero->getDato();
}

template<class T>
int CircList<T>::getTamanio() {
    Nodo<T> *aux = puntero;
    int tamanio = 1;

    if (NULL == puntero)
        return 0;

    while (aux->getNext() != puntero) {
        tamanio++;
        aux = aux->getNext();
    }
    return tamanio;
}

template <class T>
void CircList<T>::remplazar(T dato) {
    if (puntero == NULL)
        throw 1;
    return puntero->setDato(dato);
}

template <class T>
void CircList<T>::vaciar() {
    while(!esVacia())
        remover();
}

#endif //CIRCLIST_H