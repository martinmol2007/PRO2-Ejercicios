#include <set>
#include "bintree.hh"

using namespace pro2;
using namespace std;

void aux (BinTree<int> t, int depth, int h, set<int>& s) {
    if (t.empty()) {
        return;
    }

    if (depth == h) {
        s.insert(t.value());
    }

    h += 1;

    aux(t.left(), depth, h, s);
    aux(t.right(), depth, h, s);

    return;
}

/**
 * @brief Retorna el conjunt dels valors dels nodes d'un arbre 
 *        binari que estan a certa profunditat
 * 
 * La profunditat d'un node és:
 * a) 1       si és l'arrel (no té pare).
 * b) p + 1   si el pare del node té profunditat `p`.
 * 
 * @param t     Arbre binari d'enters.
 * @param depth La profunditat dels nodes que es vol.
 *
 * @returns El conjunt de valors trobats a profunditat `depth`
 */
set<int> values_at_depth(BinTree<int> t, int depth) {
    set<int> s;
    aux(t, depth, 1, s);
    return s;
}