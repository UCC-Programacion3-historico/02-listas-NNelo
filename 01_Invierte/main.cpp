#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

using namespace std;

int main() {
    Lista<int> *lista = new Lista<int>();
    cout << "HOLA\n";
    for (int i = 0; i < 10; ++i) {
        lista->insertarUltimo(i);
    }
    fnInvierte(lista);

    for (int j = 0; j < lista->getTamanio(); ++j) {
        cout << lista->getDato(j) << " ";
    }
    return 0;
}