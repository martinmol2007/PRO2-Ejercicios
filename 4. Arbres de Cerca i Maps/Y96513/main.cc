#include <iostream>
using namespace std;

#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

/**
 * @brief Retorna el valor mínim d'un BST.
 *
 * @param t Un arbre binari de cerca.
 * @pre `t` no és buit.
 * @returns El valor mínim de `t`.
 */
int bst_minim(BinTree<int> t);

/**
 * @brief Retorna el valor màxim d'un BST.
 *
 * @param t Un arbre binari de cerca.
 * @pre `t` no és buit.
 * @returns El valor màxim de `t`.
 */
int bst_maxim(BinTree<int> t);

void main_visual() {
    BinTree<int> t;
    while (cin >> t) {
        cout << bst_minim(t) << ' ' << bst_maxim(t) << endl;
    }
}

void main_preorder() {
    BinTree<int> t = bintree_from_preorder<int>(cin);
    while (not t.empty()) {
        int minim, maxim;
        for (int i = 0; i < 100; i++) {  // exagerem el temps d'execució
            minim = bst_minim(t);
        }
        for (int i = 0; i < 100; i++) {  // exagerem el temps d'execució
            maxim = bst_maxim(t);
        }
        cout << minim << ' ' << maxim << endl;
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
