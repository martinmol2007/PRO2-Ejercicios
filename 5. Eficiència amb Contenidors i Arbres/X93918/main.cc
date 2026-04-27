#include <iostream>
using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

/**
 * @brief Determina si tots els valors dels nodes interns són iguals
 * 
 * @param  t  Un arbre binari d'enters
 * @returns  `true` si tots els valors dels nodes interns són iguals, 
 *           `false` altrament.
 */
bool tree_internal_nodes_equal(BinTree<int> t);

//

void main_visual() {
    BinTree<int> t;
    while (cin >> t) {
        cout << (tree_internal_nodes_equal(t) ? "true" : "false") << endl;
    }
}

void main_inline() {
    string line;
    while (getline(cin, line)) {
        auto t = bintree_inline_read<int>(line);
        cout << (tree_internal_nodes_equal(t) ? "true" : "false") << endl;
    }
}

int main() {
    string line;
    getline(cin, line);
    if (line == "visual") {
        main_visual();
    } else if (line == "inline") {
        main_inline();
    } else {
        assert(false, "format desconegut");
    }
    return 0;
}