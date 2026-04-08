#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

BinTree<int> aux(BinTree<int> t, int& val, int h) {
    if (t.empty()) {
        val = 0;
        return BinTree<int> ();
    }

    int izq, der;

    auto l = aux(t.left(), izq, h+1);
    auto r = aux(t.right(), der, h+1);

    val = izq + der + t.value();
    
    

    if (h % 2 == 0) return BinTree<int> (val, l, r);
    else return BinTree<int> (t.value(), l, r);
}

/**
 * @brief Retorna l'arbre `t` reemplaçant els valors dels nodes a profunditat parell per la suma per sota
 *
 * @param t L'arbre binari original.
 *
 * @returns Un arbre binari R amb la mateixa estructura que t.
 * Per a cada posició p de t i R, si p és a profunditat senar,
 * llavors t i R tenen el mateix valor a posició p.
 * En canvi, si p es a profunditat parell, llavors el valor de R a posició
 * p és la suma de tots els valors que es troben a t a posició p i per sota.
 */
BinTree<int> sum_below_at_even_depth(BinTree<int> t) {
    int val;
    return aux(t, val, 0);
}