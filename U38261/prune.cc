#include "prune.hh"
#include "bintree.hh"

using namespace std;
using namespace pro2;

/**
 * @brief Poda les branques amb valor `x` d'un arbre binari.
 *
 * Cerca en un arbre binari totes les branques amb valor `x` i les elimina, retornant un nou arbre.
 * 
 * @param t Arbre binari.
 * @param x Valor de les branques a podar.
 *
 * @return Retorna una parella (`std::pair`) amb l'arbre podat i un booleà que és `true` si s'ha
 *         podat alguna branca i `false` si l'arbre resultat és igual que `t`.
 */
pair<BinTree<int>, bool> prune_tree(BinTree<int> t, int x) {
    if(t.empty()) {
        return {t, false};
    } else if (t.value() == x) {
        return {BinTree<int>(), true};
    } else {
        pair<BinTree<int>, bool> l = prune_tree(t.left(), x);
        // HI1: l.second indica si x esta en el hijo izquierdo de t
        // Si l.second es true, l.first es el arbol podado
        if(l.second) {
            return {BinTree<int>(t.value(), l.first, t.right()), true};
        } else {
            pair<BinTree<int>, bool> r = prune_tree(t.right(), x);
            // HI2: r.second indica si x esta en el hijo derecho de t
            return {BinTree<int> (t.value(), r.first, t.left()), true};
        }
    }
}