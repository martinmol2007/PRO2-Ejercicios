#include <iostream>
using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

BinTree<int> aux(BinTree<int> t, int& suma) {
    if (t.empty()) {
        suma = 0;
        return BinTree<int> ();
    }

    int sum_i, sum_d;

    auto l = aux(t.left(), sum_i);
    auto r = aux(t.right(), sum_d);

    suma = sum_i + sum_d + t.value();

    if (sum_i > sum_d) return BinTree<int> (t.value(), r, l);
    else return BinTree<int> (t.value(), l, r);
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
    int sum;
    return aux(t, sum);
}