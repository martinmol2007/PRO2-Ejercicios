#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
#include "vector-io.hh"
using namespace pro2;

#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;

BinTree<int> aux(BinTree<int> t, int& h) {
    if (t.empty()) {
        h = 0;
        return BinTree<int> ();
    }

    int izq, der;
    
    auto l = aux(t.left(), izq);
    auto d = aux(t.right(), der);

    h = 1 + max(izq, der);

    return BinTree<int> (izq-der, l, d);
}

/**
 * @brief Retorna l'arbre de graus de desequilibri de `t`.
 *
 * @param t L'arbre binari original.
 * @returns L'arbre de graus de desequilibri de `t`.
 */
BinTree<int> bintree_of_height_diffs(BinTree<int> t) {
    int h;
    return aux(t, h);
}
