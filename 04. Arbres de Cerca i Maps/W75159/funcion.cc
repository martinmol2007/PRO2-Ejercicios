#include <iostream>
using namespace std;

#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

/**
 * @brief Cerca un valor en un arbre binari de cerca.
 *
 * @param t Un arbre binari de cerca.
 * @param x Valor a cercar.
 * @returns `true` si `x` es troba a l'arbre `t`,
 *          `false` en cas contrari.
 */
bool bst_cerca(BinTree<int> t, int x) {
    if (t.empty()) return false;
    if (t.value() == x) return true;

    int num = t.value();

    if (x > num) return bst_cerca(t.right(), x);
    else return bst_cerca(t.left(), x);
}