#include "inorderTree.hh"
#include "BinTree.hh"

using namespace std;


BinTree<int> aux(BinTree<int> t, int& n) {
    if (t.empty()) {
        return BinTree<int>();
    }

    auto l = aux(t.left(), n);
    
    n++;
    int x = n;

    auto d = aux(t.right(), n);

    return BinTree<int> (x, l, d);
}

// Pre:  Sigui T el valor inicial de l'arbre t que es rep com a paràmetre.
// Post: Sigui T' l'arbre retornat. T i T' tenen exactament la mateixa estructura.
//       Sigui n1,n2,...,nk els nodes de T' en el recorregut en inordre de T'.
//       Llavors, n1 guarda el valor 1, n2 guarda el valor 2, ..., nk guarda el valor k.
BinTree<int> inorderTree(BinTree<int> t) {
    int n = 0;
    return aux(t, n);
}
