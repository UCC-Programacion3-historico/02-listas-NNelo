#include "../Lista/Lista.h"

#ifndef FNINVIERTE_H
#define FNINVIERTE_H

template<class T>
void invierte(Lista<T> *L, Lista<T> *LC) {
    if (LC->esVacia())
        return;
    L->insertarPrimero(LC->getDato(0));
    LC->remover(0);
    invierte(L, LC);
}

template<class T>
void fnInvierte(Lista<T> *L) {
    Lista<T> LC(*L);
    L->vaciar();
    invierte(L, &LC);
}

#endif //FNINVIERTE_H