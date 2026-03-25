#include <iostream>
using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

// El padre pasa info a sus hijos
bool aux (BinTree<int> t, int val, bool primero) {
    if (t.empty()) return true;
    else if (t.left().empty() && t.right().empty()) return true;
    else {
        if (primero) {
            primero = false;
            val = t.value();
        }
        else if (t.value() != val) return false;
        return aux(t.left(), val, primero) && aux(t.right(), val, primero);
    }    
}  

/**
 * @brief Determina si tots els nodes interns d'un arbre binari tenen el mateix valor
 *
 * Un node intern és un node que no és una fulla (té almenys un fill).
 *
 * @param t L'arbre binari d'enters.
 * @returns `true` si tots els nodes interns tenen el mateix valor, `false` altrament.
 */
bool tree_internal_nodes_equal(BinTree<int> t) {
    return aux(t, 0, true);
}