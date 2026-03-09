#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

#include <iostream>
using namespace std;

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
    if (t.empty()) {
        return BinTree<int>();
    } 
    auto L = tree_of_sizes(t.left());
    auto R = tree_of_sizes(t.right());

    int raiz = 1;
    
    if (not L.empty()) {
        raiz += L.value();
    } 
    if (not R.empty()) {
        raiz += R.value();
    }   

    return BinTree<int> (raiz, L, R);
}