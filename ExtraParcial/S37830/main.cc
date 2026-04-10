#include <iostream>
#include <string>
using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

/**
 * @brief Concatena tots els valors d'un arbre binari de strings en inordre
 *
 * @param t L'arbre binari de strings.
 * @returns La concatenació de tots els valors de l'arbre en inordre.
 */
string tree_join(BinTree<string> t);

void main_visual() {
    BinTree<string> t;
    while (cin >> t) {
        cout << tree_join(t) << endl;
    }
}

void main_inline() {
    string line;
    while (getline(cin, line)) {
        auto t = bintree_inline_read<string>(line);
        cout << tree_join(t) << endl;
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
