#include "postorderTree.hh"

using namespace std;

#include "BinTree.hh"

BinTree<int> aux (BinTree<int> t, int& n) {
    if (t.empty()) {
        return BinTree<int>();
    }

  
    auto l = aux(t.left(), n);
    auto d = aux(t.right(), n);
    n++;
    
    return BinTree<int> (n, l, d);
}

// Pre:  Sigui T el valor inicial de l'arbre t que es rep com a paràmetre.
// Post: Sigui T' l'arbre retornat. T i T' tenen exactament la mateixa estructura.
//       Sigui n1,n2,...,nk els nodes de T' en el recorregut en postordre de T'.
//       Llavors, n1 guarda el valor 1, n2 guarda el valor 2, ..., nk guarda el valor k.
BinTree<int> postorderTree(BinTree<int> t) {
    int n = 0;
    return aux(t, n);
}