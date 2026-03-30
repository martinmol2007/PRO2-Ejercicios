#include "BinTree.hh"
#include "treeOfSums.hh"

using namespace std;


BinTree<int> aux(BinTree<int> t, int& n) {
    if (t.empty()) {
        n = 0;
        return BinTree<int>();
    }
    
    int izq, der;

    auto l = aux(t.left(), izq);
    auto d = aux(t.right(), der);

    n = t.value() + izq + der;

    return BinTree<int> (n, l, d);
}

// Pre:
// Post: Retorna un arbre d'enters amb la mateixa estructura que t,
//       i a on cada subarbre té com a arrel la suma dels nodes del corresponent subarbre a t.
BinTree<int> treeOfSums(BinTree<int> t) {
    int n = 0;
    return aux(t, n);
}