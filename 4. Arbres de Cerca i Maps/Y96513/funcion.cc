#include <iostream>
using namespace std;

#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;


/**
 * @brief Retorna el valor mínim d'un BST.
 *
 * @param t Un arbre binari de cerca.
 * @pre `t` no és buit.
 * @returns El valor mínim de `t`.
 */
int bst_minim(BinTree<int> t) {
    if (not t.left().empty()) return bst_minim(t.left());
    return t.value();
}

/**
 * @brief Retorna el valor màxim d'un BST.
 *
 * @param t Un arbre binari de cerca.
 * @pre `t` no és buit.
 * @returns El valor màxim de `t`.
 */
int bst_maxim(BinTree<int> t) {
    if (not t.right().empty()) return bst_maxim(t.right());
    return t.value();
}