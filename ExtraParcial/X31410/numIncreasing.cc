#include "numIncreasing.hh"
#include "BinTree.hh"

using namespace std;


int aux(BinTree<int> t, int padre) {
    if (t.empty()) return 0;
    
    if (t.value() > padre) return 1 + aux(t.left(), t.value()) + aux(t.right(), t.value());
    else return aux(t.left(), t.value()) + aux(t.right(), t.value());
}

// Pre:
// Post: Retorna el nombre de nodes de t que no son l'arrel de t i que guarden un valor
//       estríctament major que el valor guardat al seu node pare.
int numIncreasing(BinTree<int> t) {
    return aux(t, t.value());
}
