#include <iostream>
using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

/**
 * @brief Determina si un arbre binari és un "arbre de múltiples"
 *
 * Un arbre de múltiples és un arbre on el valor de cada fill és
 * múltiple del valor del seu pare.
 *
 * @param t L'arbre binari d'enters.
 * @returns `true` si l'arbre és un arbre de múltiples, `false` altrament.
 */
bool arbre_de_multiples(BinTree<int> t);

void main_visual() {
    BinTree<int> t;
    while (cin >> t) {
        cout << (arbre_de_multiples(t) ? "si" : "no") << endl;
    }
}

void main_inline() {
    string line;
    while (getline(cin, line)) {
        auto t = bintree_inline_read<int>(line);
        cout << (arbre_de_multiples(t) ? "si" : "no") << endl;
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
