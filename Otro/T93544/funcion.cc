#include <iostream>
using namespace std;

#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

/**
 * @brief Suma els valors d'un arbre binari.
 * 
 * Si un node de l'arbre és buit, el seu valor és 0. 
 *
 * @param t Arbre binari.
 *
 * @returns La suma dels valors dels nodes de l'arbre `t`.
 */
int suma_valors(BinTree<int> t) {
    if (t.empty()) {
        return 0;
    }

    int izq = suma_valors(t.left());
    int der = suma_valors(t.right());

    return t.value() + izq + der;
}