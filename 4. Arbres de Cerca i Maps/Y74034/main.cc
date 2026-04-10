#include <iostream>
using namespace std;

#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

/**
 * @brief Insereix un valor en un BST.
 *
 * @param t Un arbre binari de cerca.
 * @param x Valor a inserir.
 * @returns Un nou BST amb `x` inserit a la posició correcta.
 *          Si `x` ja és a `t`, retorna `t` sense canvis.
 */
BinTree<int> bst_inserta(BinTree<int> t, int x);

void processa(BinTree<int> t) {
    string line;
    getline(cin, line);
    istringstream sin(line);
    int x;
    while (sin >> x) {
        t = bst_inserta(t, x);
    }
    cout << t;
}

int main() {
    string format;
    getline(cin, format);
    if (format == "preorder") {
        BinTree<int> t = bintree_from_preorder<int>(cin);
        processa(t);
    } else {
        BinTree<int> t;
        while (cin >> t) {
            processa(t);
        }
    }
}
