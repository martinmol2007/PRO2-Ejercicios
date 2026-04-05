#include "BinTree.hh"



int aux (BinTree<int> t, int padre) {
    if (t.empty()) {
        return 0;
    }

    int e = aux(t.left(), t.value());
    int d = aux(t.right(), t.value());
    int num = e + d;

    if (t.value() > padre) {
        return 1 + num;
    }
    else {
        return num;
    }
}

// Pre:
// Post: Retorna el nombre de nodes de t que no son l'arrel de t i que guarden un valor
//       estríctament major que el valor guardat al seu node pare.
int numIncreasing(BinTree<int> t) {
    if (t.empty()) return 0;
    return aux(t, t.value());
}
