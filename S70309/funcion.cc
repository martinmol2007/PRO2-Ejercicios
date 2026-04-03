#include <string>
#include "bintree.hh"

using namespace std;
using namespace pro2;

bool find_first(BinTree<pair<int, string>> t, int x, string& trobat) {
    if (t.empty()) {
        return false;
    }

    if (t.value().first == x) {
        trobat = t.value().second;
        return true;
    }

    return find_first(t.left(), x, trobat) or find_first(t.right(), x, trobat);
}