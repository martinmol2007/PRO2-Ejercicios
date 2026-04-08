#include "bintree.hh"

using namespace std;
using namespace pro2;

bool aux (BinTree<int> t, int x) {
    if (t.empty()) return true;
    else if (t.left().empty() && t.right().empty()) return true;
    else {
        if (t.value() != x) return false;
        return aux(t.left(), x) && aux(t.right(), x);
    }
}

/**
 * @brief Determina si tots els valors dels nodes interns són iguals
 * 
 * @param  t  Un arbre binari d'enters
 * @returns  `true` si tots els valors dels nodes interns són iguals, 
 *           `false` altrament.
 */
bool tree_internal_nodes_equal(BinTree<int> t) {
    if (t.empty()) return true;
    return aux(t, t.value());
}