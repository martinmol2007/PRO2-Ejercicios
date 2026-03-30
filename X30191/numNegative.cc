#include "numNegative.hh"
#include "BinTree.hh"
#include "utils.hh"

#include <iostream>
#include <string>

using namespace std;

int aux (BinTree<string> t, int& negativos) {
    if (t.left().empty() && t.right().empty()) {
        return mystoi(t.value());
    } 
    
    int izq = aux(t.left(), negativos);
    int der = aux(t.right(), negativos);


    int res;
    if (t.value() == "+") {
        res = izq + der;
    }
    else if (t.value() == "-") {
        res = izq - der;
    } 
    else {
        res = izq * der;
    }

    

    res < 0 ? negativos++ : 0;

    return res;
}

// Pre:  t és un arbre no buit que representa una expressió correcta
//       sobre els naturals i els operadors +,-,*.
//       Les operacions no produeixen errors d'overflow.
// Post: Retorna el nombre de subexpressions de l'expressió representada per t
//       amb avaluació estrictament menor que 0.
int numNegative(BinTree<string> t) {
    int negativos = 0;
    aux(t, negativos);
    return negativos;
}