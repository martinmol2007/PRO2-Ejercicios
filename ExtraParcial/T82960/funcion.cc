#include "bintree.hh"

using namespace std;
using namespace pro2;

bool aux (BinTree<int> t, int& val) {
    if (t.left().empty() && t.right().empty()) {
        val = t.value();
        return true;
    }

    int izq, der;

    if (not aux(t.left(), izq)) return false;

    if (not aux(t.right(), der)) return false;

    if (izq != der) return false;

    val = izq;
    
    return true;

    
}

/**
 * @brief Determina si totes les fulles d'un arbre tenen 
 *        el mateix valor.
 * 
 * @param  t  Un arbre binari d'enters
 * @returns  `true` si totes les fulles són iguals, 
 *           `false` altrament.
 *
 * @pre  En tots els subarbres de `t` es compleix: o bé són 
 *       fulles, o bé les dues branques són no buides.
 */
bool tree_all_leaves_equal(BinTree<int> t) {
    int val;
    return aux(t, val);
}