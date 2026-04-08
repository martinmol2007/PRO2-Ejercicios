#include <iostream>
using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

/**
 * @brief Ordena un arbre binari intercanviant fills segons les sumes dels subarbres
 *
 * Per cada node, si la suma del subarbre dret és menor que la del subarbre esquerre,
 * s'intercanvien els fills.
 *
 * @param t L'arbre binari d'enters.
 * @returns L'arbre ordenat.
 */
BinTree<int> sort_tree(BinTree<int> t);

void main_inline() {
    string line;
    while (getline(cin, line)) {
        auto t = bintree_inline_read<int>(line);
        auto r = sort_tree(t);
        bintree_inline_write(r);
    }
}

void main_visual() {
    BinTree<int> t;
    while (cin >> t) {
        cout << sort_tree(t);
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
