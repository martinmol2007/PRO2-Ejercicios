#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

#include <iostream>
using namespace std;

BinTree<int> aux(BinTree<int> t, int& h) {
    if (t.empty()) {
        h = 0;
        return BinTree<int> ();
    }

    int h_izq, h_der;

    auto l = aux(t.left(), h_izq);
    auto r = aux(t.right(), h_der);

    h = h_izq + h_der + 1;

    return BinTree<int> (h, l, r);
}

/**
 * @brief Retorna l'arbre de mides de `t`.
 *
 * L'arbre de mides és un arbre binari amb la mateixa forma que `t` però a on cada valor conté la
 * quantitat total de nodes del subarbre que penja de la mateixa posició a `t`.
 *
 * @param t L'arbre binari original.
 *
 * @returns L'arbre de mides de `t`.
 */
BinTree<int> tree_of_sizes(BinTree<int> t) {
    int h;
    return aux(t,h);
}