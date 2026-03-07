#include <iostream>
using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "prune.hh"
using namespace pro2;



std::pair<pro2::BinTree<int>, bool> prune_tree(pro2::BinTree<int> t, int x) {
    if (t.empty()) {
        return {BinTree<int>(), false};
    } 
    else if (t.value() == x) {
        return {BinTree<int>(), true};
    } else {
        auto a1 = prune_tree(t.left(), x);
        auto a2 = prune_tree(t.right(), x);
        return {BinTree<int> (t.value(), a1.first, a2.first), (a1.second or a2.second)};
    }
}