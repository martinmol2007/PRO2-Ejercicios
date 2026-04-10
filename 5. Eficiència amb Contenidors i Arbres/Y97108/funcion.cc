#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

BinTree<int> sum_aux (BinTree<int> t, int altura, int& suma) {
    if (t.empty()) {
        return BinTree<int>();
    }
    int sumai = 0;
    int sumad = 0;

    BinTree<int> l = sum_aux(t.left(), altura+1, sumai);
    // HI: l es el arbol reemplazo del hijo izquerdo de t // sumi es la suma de elemenots del hijo izq
    BinTree<int> d = sum_aux(t.right(), altura+1, sumad);
    // HI: d es el arbol reemplzao del hijo derecho de t // sumd es la suma de elemenots del hijo der
    suma = t.value() + sumai + sumad;

    if (altura % 2 == 0) return BinTree<int> (suma, l, d);
    else return BinTree<int> (t.value(), l, d);

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
    int suma = 0;
    return sum_aux(t, 0, suma);
}

