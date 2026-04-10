#include <iostream>
using namespace std;

#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

/**
 * @brief Cerca un valor en un arbre binari de cerca.
 *
 * @param t Un arbre binari de cerca.
 * @param x Valor a cercar.
 * @returns `true` si `x` es troba a l'arbre `t`,
 *          `false` en cas contrari.
 */
bool bst_cerca(BinTree<int> t, int x);

void processa(BinTree<int> t) {
    int x;
    while (cin >> x) {
        cout << x << ' ' << (bst_cerca(t, x) ? "true" : "false") << endl;
    }
}

int main() {
    string format;
    getline(cin, format);
    if (format == "preorder") {
        BinTree<int> t = bintree_from_preorder<int>(cin);
        processa(t);
    } else {
        BinTree<int> t;
        cin >> t;
        processa(t);
    }
}
