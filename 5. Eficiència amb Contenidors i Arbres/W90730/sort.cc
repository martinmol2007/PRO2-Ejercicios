#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

BinTree<int> ordenar(const BinTree<int>& t, int& suma) {
    if (t.empty()) { suma = 0; return BinTree<int>(); }

    int suma_esq, suma_dre;
    auto L = ordenar(t.left(), suma_esq);
    auto R = ordenar(t.right(), suma_dre);

    suma = t.value() + suma_esq + suma_dre;

    if (suma_dre < suma_esq) return BinTree<int>(t.value(), R, L);
    else return BinTree<int>(t.value(), L, R);
}
BinTree<int> sort_tree(BinTree<int> t) {
    int suma_total;
    return ordenar(t, suma_total);
}