#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB) {
    Lista<T> *R = new Lista<T>;
    T ver;
    for (int i = 0; i < lisA.getTamanio(); ++i) {
        ver = lisA.getDato(i);
        R->insertarUltimo(lisA.getDato(i));
    }
    for (int j = 0; j < lisB.getTamanio(); ++j) {
        R->insertarUltimo(lisB.getDato(j));
        ver = lisB.getDato(j);
    }

    return R;
}


#endif //UNION_H
