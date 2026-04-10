#include <iostream>
#include <string>
#include <utility>
using namespace std;

// NOTA: bintree-io.hh ja defineix operator>> i operator<< per pair<A,B>,
// per tant no cal definir-los aquí.
#include "bintree-io.hh"
#include "bintree.hh"
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