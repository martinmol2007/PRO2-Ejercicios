#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

#include <iostream>
using namespace std;

BinTree<int> aux (BinTree<int> t, int& sum) {
    if (t.empty()) {
        sum = 0;
        return BinTree<int> ();
    }

    int izq, der;

    auto l = aux(t.left(), izq);
    auto r = aux(t.right(), der);

    sum = t.value() + izq + der;

    return BinTree<int> (sum, l, r);
    
}

/**
 * @brief Retorna l'arbre de sumes de `t`.
 *
 * L'arbre de sumes és un arbre binari amb la mateixa forma de `t` però a on cada valor conté la
 * suma dels valors del subarbre que penja de la mateixa posició a `t`.
 *
 * @param t L'arbre binari original.
 *
 * @returns L'arbre de sumes de `t`.
 */
BinTree<int> tree_of_sums(BinTree<int> t) {
    int suma;
    return aux(t, suma);
}