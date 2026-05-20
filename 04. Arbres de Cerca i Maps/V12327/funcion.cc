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
 *       de menor a major, separats per espais i amb un salt de
 *       línia al final.
 */
void mostra_bst(BinTree<int> t) {
    if (t.empty()) return;

    mostra_bst(t.left());
    cout << t.value() << " ";
    mostra_bst(t.right());
}