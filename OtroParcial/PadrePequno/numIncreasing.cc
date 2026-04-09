#include <iostream>

using namespace std;

#include "BinTree.hh"
#include "numIncreasing.hh"

int aux (BinTree<int> t, int padre) {
    if (t.empty()) {
        return 0;
    }

    int izq = aux(t.left(), t.value());
    int der = aux(t.right(), t.value());

    if (t.value() > padre) return 1 + izq + der;
    else return izq + der;
}

// Pre:
// Post: Retorna el nombre de nodes de t que no son l'arrel de t i que guarden un valor
//       estríctament major que el valor guardat al seu node pare.
int numIncreasing(BinTree<int> t) {
    return aux(t, t.value());
}
