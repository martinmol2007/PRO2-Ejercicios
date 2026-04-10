#include "BinTree.hh"
#include "numTwins.hh"

using namespace std;

// Pre:
// Post: Retorna el nombre de parelles de nodes de t que tenen el mateix node pare i el mateix valor
int numTwins(BinTree<int> t) {
    if (t.empty()) {
        return 0;
    }
    else if (not t.left().empty() && not t.right().empty()) {
        if (t.left().value() == t.right().value()) {
            return 1 + numTwins(t.left()) + numTwins(t.right());
        } else {
            return numTwins(t.left()) + numTwins(t.right());
        }
    } else {
        return numTwins(t.left()) + numTwins(t.right());
    }
}