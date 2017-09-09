#include "gtest/gtest.h"
#include "../../Lista/Lista.h"

TEST(test_06_insertAfter, test) {
    EXPECT_EQ(true, true);
}

Lista<int> *lista;

TEST(test_06_insertAfter, test2) {
    lista = new Lista<int>();
    for (int j = 0; j < 9; ++j)
        lista->insertarUltimo(2);
    lista->insertAfter2(2, 3, 5);
    bool est = true;
    for (int i = 0; i < lista->getTamanio() && est; ++i) {
        if (i == 3 || i == 7 || i == 11) {
            if (lista->getDato(i) != 5)
                est = false;
        } else if (lista->getDato(i) != 2)
            est = false;
    }
    delete lista;
    EXPECT_EQ(est, true);
}

TEST(test_06_insertAfter, test3) {
    lista = new Lista<int>();
    for (int j = 0; j < 9; ++j)
        lista->insertarUltimo(j);
    Lista<int> *lista2(lista);
    lista->insertAfter2(2, 3, 5);

    ASSERT_TRUE(lista2->getTamanio() == lista->getTamanio());
}