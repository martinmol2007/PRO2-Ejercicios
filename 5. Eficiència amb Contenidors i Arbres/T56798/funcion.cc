#include "bintree.hh"
using namespace std;
using namespace pro2;


/**
 * @brief Determina si un arbre binari és un "arbre de múltiples"
 *
 * Un arbre de múltiples és un arbre on el valor de cada fill és
 * múltiple del valor del seu pare.
 *
 * @param t L'arbre binari d'enters.
 * @returns `true` si l'arbre és un arbre de múltiples, `false` altrament.
 */
bool arbre_de_multiples(BinTree<int> t) {
    if (t.empty()) return true;

    if (not t.left().empty()) {
        int val = t.left().value();
        if (val % t.value() != 0) return false;
    }
    if (not t.right().empty()) {
        int val = t.right().value();
        if (val % t.value() != 0) return false;
    }

    return arbre_de_multiples(t.left()) and arbre_de_multiples(t.right());
}