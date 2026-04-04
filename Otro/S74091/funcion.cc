#include <set>
#include "bintree.hh"

using namespace std;
using namespace pro2;


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
    if (t.empty()) {
        return set<int>();
    }
    else if (depth == 1) {
        set<int> s;
        s.insert(t.value());
        return s;
    } 
    else {
        set<int> e = values_at_depth(t.left(), depth-1);
        set<int> d = values_at_depth(t.right(), depth-1);

        e.insert(d.begin(), d.end());

        return e;
    }
}