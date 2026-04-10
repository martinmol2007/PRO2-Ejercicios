#include <iostream>

using namespace std;

#include "BinTree.hh"
#include "numberOfLeaves.hh"

// Pre:
// Post: Retorna el nombre de fulles de t
int numberOfLeaves(BinTree<int> t) {
    if (t.empty()) {
        return 0;
    }
    if (t.left().empty() && t.right().empty()) {
        return 1 + numberOfLeaves(t.left()) + numberOfLeaves(t.right());
    }

    return  numberOfLeaves(t.left()) + numberOfLeaves(t.right());
}