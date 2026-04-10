#include <iostream>
#include <string>
#include "tree.hh"
#include "eval.hh"
#include <string>

using namespace std;
using namespace pro2;

/**
 * @brief Avalua un arbre no buit que representa una expressió Booleana.
 *
 * L'expressió és sobre l'1 (true) i el 0 (fals) i els operadors
 * 'and', 'or', i 'not'.
 *
 * @pre L'arbre és no buit i l'expressió és correcta, és a dir, els operands
 * 'and' i 'or' tenen més d'un operand, i l'operador 'not' en té només 1.
 *
 * @param t Arbre que representa l'expressió.
 * @return Resultat de l'avaluació de l'expressió.
 */
bool evaluate(Tree<string> t) {
    if (t.empty()) return false;
    if (t.value() == "1") return true;
    if (t.value() == "0") return false;

    if (t.value() == "and") {
        for (int i = 0; i < t.num_children(); i++) {
            if (not evaluate(t.child(i))) {
                return false;
            }
        }
        return true;
    }
    else if (t.value() == "or") {
        for (int i = 0; i < t.num_children(); i++) {
            if (evaluate(t.child(i))) {
                return true;
            }
        }
        return false;
    }
    else if (t.value() == "not") {
        return not evaluate(t.child(0));
    }
    return false;
}