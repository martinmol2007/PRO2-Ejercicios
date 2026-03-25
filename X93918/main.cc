#include <iostream>
using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

/**
 * @brief Determina si tots els nodes interns d'un arbre binari tenen el mateix valor
 *
 * Un node intern és un node que no és una fulla (té almenys un fill).
 *
 * @param t L'arbre binari d'enters.
 * @returns `true` si tots els nodes interns tenen el mateix valor, `false` altrament.
 */
bool tree_internal_nodes_equal(BinTree<int> t);

void main_visual() {
    BinTree<int> t;
    while (cin >> t) {
        cout << (tree_internal_nodes_equal(t) ? "si" : "no") << endl;
    }
}

void main_inline() {
    string line;
    while (getline(cin, line)) {
        auto t = bintree_inline_read<int>(line);
        cout << (tree_internal_nodes_equal(t) ? "si" : "no") << endl;
    }
}

int main() {
    string format;
    getline(cin, format);
    if (format == "inline") {
        main_inline();
    } else {
        main_visual();
    }
}
