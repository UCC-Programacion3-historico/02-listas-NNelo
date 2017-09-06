#include <iostream>
#include "../Lista/Lista.h"

using namespace std;

template<class T>
void mostrarlista(Lista<T> l) {
    for (int i = 0; i < l.getTamanio(); ++i) {
        cout<<l.getDato(i)<<endl;
    }
}

int main() {
    std::cout << "Ejercicio 01/02\n" << std::endl;
    Lista<float> lis;

    int op;
    float num;

    cout << "Su lista está vacía\n";
    do {
        cout << "OPCIONES\n"
             << "1- Agregar al principio\n"
             << "2- Agregar al medio\n"
             << "3- Agregar al final\n"
             << "0- Salir\n";
        cin >> op;

        switch (op) {
            case 1:
                cout << "Ingresar el numero\n";
                cin >> num;
                lis.insertarPrimero(num);
                break;

            case 2:
                cout << "Ingresar el numero\n";
                cin >> num;
                lis.insertar(lis.getTamanio() / 2, num);
                break;

            case 3:
                cout << "Ingresar el numero\n";
                cin >> num;
                lis.insertarUltimo(num);
                break;

            default:
                break;
        }
       // mostrarlista(lis);
    } while (op != 0);

    return 0;
}