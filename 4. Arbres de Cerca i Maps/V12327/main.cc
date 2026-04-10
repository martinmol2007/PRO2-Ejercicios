#include <iostream>
using namespace std;

#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

/**
 * @brief Mostra els valors d'un BST ordenats de menor a major.
 *
 * @param t Un arbre binari de cerca.
 * @post S'han escrit els valors de `t` per la sortida estàndard,
 *       de menor a major. Després de cada valor hi ha un espai.
 */
void mostra_bst(BinTree<int> t);

void main_visual() {
    BinTree<int> t;
    while (cin >> t) {
        mostra_bst(t);
        cout << endl;
    }
}

void main_preorder() {
    BinTree<int> t = bintree_from_preorder<int>(cin);
    while (not t.empty()) {
        mostra_bst(t);
        cout << endl;
        t = bintree_from_preorder<int>(cin);
    }
}

int main() {
    string format;
    getline(cin, format);
    if (format == "preorder") {
        main_preorder();
    } else {
        main_visual();
    }
}
