#include <iostream>

using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"

using namespace pro2;

pair<BinTree<int>, int> sort_tree_pair (BinTree<int> t) {
    if (t.empty()) {
        return {t, 0};
    } else {
        // HI1: l.firset -> al hijo izq ordenado, l.second -> suma del hijo izq
        // Lo mismo con el derecho
        auto l = sort_tree_pair(t.left());
        auto r = sort_tree_pair(t.right());

        int suma = t.value() + l.second + r.second;
        if (l.second <= r.second) return {BinTree<int>(t.value(), l.first, r.first), suma};
        else return {BinTree<int>(t.value(), r.first, l.first), suma};
    }
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
BinTree<int> sort_tree(BinTree<int> t) {
    auto p = sort_tree_pair(t);
    return p.first;
}