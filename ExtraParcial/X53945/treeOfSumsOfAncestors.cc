#include "BinTree.hh"

using namespace std;

BinTree<int> aux (BinTree<int> t, int n) {
    if (t.empty()) {
        return BinTree<int> ();
    }

    auto l = aux(t.left(), n+t.value());
    auto d = aux(t.right(), n+t.value());
    
    int sum = n + t.value();

    return BinTree<int> (sum, l, d);
}


// Pre:
// Post: Retorna un arbre d'enters t' amb la mateixa estructura que t.
//       Per a cada posició p, el valor guardat a t' a posició p és igual a la suma
//       dels valors guardats a t a posició p i a posicions ancestres de p.
BinTree<int> treeOfSumsOfAncestors(const BinTree<int> t) {
    return aux(t, 0);
}