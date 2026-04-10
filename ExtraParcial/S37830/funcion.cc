#include "bintree.hh"
#include <string>

using namespace std;
using namespace pro2;

/**
 * @brief Concatena tots els valors d'un arbre binari de strings en inordre
 *
 * @param t L'arbre binari de strings.
 * @returns La concatenació de tots els valors de l'arbre en inordre.
 */
string tree_join(BinTree<string> t) {
    if (t.empty()) {
        string s = "";
        return s;
    }

    string s = "";

    s += tree_join(t.left()) + t.value() + tree_join(t.right());
    
    return s;
}