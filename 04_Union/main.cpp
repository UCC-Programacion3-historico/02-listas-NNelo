#include <iostream>
#include "../Lista/Lista.h"

int main() {
    std::cout << "Ejercicio 01/04\n" << std::endl;

    //prueba de constructor por copia

    Lista<int> original;
    for (int i = 0; i < 10; ++i) {
        original.insertarUltimo(i);
    }

    Lista<int> copia(original);

    for (int j = 0; j < copia.getTamanio(); ++j) {
        std::cout<< copia.getDato(j);
    }

    return 0;
}