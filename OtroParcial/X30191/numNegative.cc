
#include <string>

using namespace std;
#include "numNegative.hh"
#include "BinTree.hh"
#include "utils.hh"

// PRE: t no esta vacio
// First Contador, Second Valor
pair<int, int> aux (BinTree<string> t) {
    if (t.left().empty() && t.right().empty()) return {0, mystoi(t.value())};
    else {
        // pi first, contador de expresiones negativas de izq
        // pi second, valor de la expresion del hijo izq
        pair<int, int> pi = aux(t.left());
        // pd first, contador de expresiones negativas de der
        // pd second, valor de la expresion del hijo der
        pair<int, int> pd = aux(t.right());

        int valor;
        int cont = pi.first + pd.first;
        
        if (t.value() == "+") {
            valor = pi.second + pd.second;
        } else if (t.value() == "-") {
            valor = pi.second - pd.second;
        } else {
            valor = pi.second * pd.second;
        }

        if (valor < 0) cont++;

        return {cont, valor};
    }
}

// Pre:  t és un arbre no buit que representa una expressió correcta
//       sobre els naturals i els operadors +,-,*.
//       Les operacions no produeixen errors d'overflow.
// Post: Retorna el nombre de subexpressions de l'expressió representada per t
//       amb avaluació estrictament menor que 0.
int numNegative(BinTree<string> t) {
    auto p = aux(t);
    // First Contador, Second Valor
    return p.first;
}