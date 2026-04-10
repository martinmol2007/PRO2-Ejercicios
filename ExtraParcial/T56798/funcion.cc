#include "bintree.hh"

using namespace std;
using namespace pro2;

bool aux (BinTree<int> t, int& padre) {
    if (t.empty()) {
        return true;
    }

    int val = t.value();

    bool izq = aux(t.left(), val);
    bool der = aux(t.right(), val);

    if (t.value() % padre != 0) return false;

    return izq and der;
}

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
    int val = t.value();
    return aux(t, val);
}