#include <iostream>
using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

BinTree<int> aux (BinTree<int> t, int& suma) {
    if (t.empty()) {
        suma = 0;
        return BinTree<int> ();
    }

    int izq, der;

    auto l = aux(t.left(), izq);
    auto r = aux(t.right(), der);

    suma = t.value() + izq + der;

    if (izq > der) {
        return BinTree<int> (t.value(), r, l);
    } else {
        return BinTree<int> (t.value(), l, r);
    }
}


/**
 * @brief Ordena un arbre binari intercanviant fills segons les sumes dels subarbres
 *
 * Per cada node, si la suma del subarbre dret és menor que la del subarbre esquerre,
 * s'intercanvien els fills.
 *
 * @param t L'arbre binari d'enters.
 * @returns L'arbre ordenat.
 */
BinTree<int> sort_tree(BinTree<int> t) {
    int suma;
    return aux(t, suma);
}