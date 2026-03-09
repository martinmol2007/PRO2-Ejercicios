#include <iostream>

using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"

using namespace pro2;

pair<BinTree<int>, int> sort_tree_pair (BinTree<int> t) {
    
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
    if (t.empty()) {
        return BinTree<int>();
    }
}