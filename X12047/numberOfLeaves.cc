#include "BinTree.hh"
#include "numberOfLeaves.hh"

using namespace std;


// Pre:
// Post: Retorna el nombre de fulles de t
int numberOfLeaves(BinTree<int> t) {
    if (t.empty()) {
        return 0;
    }
    else if (t.left().empty() && t.right().empty()) {
        return 1 + numberOfLeaves(t.left()) + numberOfLeaves(t.right());
    } else {
        return numberOfLeaves(t.left()) + numberOfLeaves(t.right());
    }
}
