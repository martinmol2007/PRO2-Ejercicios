#include <iostream>
using namespace std;

#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

/**
 * @brief Insereix un valor en un BST.
 *
 * @param t Un arbre binari de cerca.
 * @param x Valor a inserir.
 * @returns Un nou BST amb `x` inserit a la posició correcta.
 *          Si `x` ja és a `t`, retorna `t` sense canvis.
 */
BinTree<int> bst_inserta(BinTree<int> t, int x) {
    
    if (t.empty()) return BinTree<int> (x); // Si ya ha pasado por todas las bifurcaciones, va aqui
    int num = t.value();
    if (num == x) return t;

    if (x > num) return BinTree<int> (num, t.left(), bst_inserta(t.right(), x));
    else return BinTree<int> (num , bst_inserta(t.left(), x), t.right());
}