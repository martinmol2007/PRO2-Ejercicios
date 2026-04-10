#include "bintree.hh"

using namespace pro2;
using namespace std;


BinTree<int> aux (BinTree<int> t, int& h) {
    if (t.empty()) {
        h = 0;
        return BinTree<int> ();
    } else {
        int h_izq, h_der;

        auto t_izq = aux(t.left(), h_izq); 
        // t_izq es el arbol de desquilibrio del hijo izq de t y h_izq es la altura del hijo izq
        auto t_der = aux(t.right(), h_der); 
        // t_der es el arbol de desquilibrio del hijo der de t y h_der es la altura del hijo der

        h = 1 + max(h_izq, h_der);

        return BinTree<int> (h_izq-h_der, t_izq, t_der);
    }
}

/**
 * @brief Retorna l'arbre de graus de desequilibri de `t`.
 *
 * @param t L'arbre binari original.
 * @returns L'arbre de graus de desequilibri de `t`.
 */
BinTree<int> bintree_of_height_diffs(BinTree<int> t) {
    int h;
    return aux(t, h);
}