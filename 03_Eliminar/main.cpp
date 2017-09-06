#include <iostream>
#include "../Lista/Lista.h"

using namespace std;

//templates en funciones en main?????????????????

int main() {
    int cant, num;
    Lista<int> lis;
    std::cout << "Ejercicio 01/03\n" << std::endl;
    cout << "Ingresar cantidad de elementos de la lista de enteros\n";
    cin >> cant;
    for (int i = 0; i < cant; ++i) {
        cout << "Ingresar elemento " << i << endl;
        cin >> num;
        lis.insertar(i, num);
    }

    int op;

    do {
        cout << "La lista es:\n";
        for (int i = 0; i < lis.getTamanio(); ++i)
            cout << lis.getDato(i) << endl;
        cout << "***************" << endl;

        cout << "Ingrese la posición a eliminar o un negativo para salir\n";

        cin >> op;
        if (op >= 0) {
            try {
                lis.remover(op);
            } catch (int e){
                cout<<"El indice no existe\n";
            }
        }
    } while (op >= 0);

    return 0;
}