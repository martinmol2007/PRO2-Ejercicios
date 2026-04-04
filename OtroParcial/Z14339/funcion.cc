#include <iostream>
using namespace std;

#include "tree-io.hh"
using namespace pro2;

/**
 * @brief Transforma una expressió en la seva representació com a `string`.
 *
 * Una expressió està formada per operadors (`+`, `*` i `-`), i
 * operands (naturals), que són nodes d'un arbre. Els operadors tenen dos
 * fills o més, i els operands són fulles (no tenen fills).
 *
 * L'expressió representada com a `string` és de la següent manera. Per a
 * operands: cal retornar l'operand mateix. Per a operadors, cal retornar
 * els fills de l'operador, separats per l'operador, amb un espai entre
 * operands i operadors, i tot el conjunt sempre entre parèntesis.
 *
 * @pre L'arbre representa una expressió ben formada
 *
 * @param t L'arbre que representa l'expressió.
 * @returns La representació com a `string` de `t`
 */
string expression_to_string(Tree<string> t) {
    if (t.empty()) {
        return "";
    }

    if (t.value() == "+") {
        string s = "(";
        for (int i = 0; i < t.num_children(); i++) {
            s +=  expression_to_string(t.child(i));
            if (i < t.num_children() - 1) {
                s += " + ";
            }
        }
        s += ")";
        return s;
    }
    else if (t.value() == "-") {
        string s = "(";
        for (int i = 0; i < t.num_children(); i++) {
            s += expression_to_string(t.child(i));
            if (i < t.num_children() - 1) {
                s += " - ";
            }
        }
        s += ")";
        return s;
    }
    else if (t.value() == "*") {
        string s = "(";
        for (int i = 0; i < t.num_children(); i++) {
            s += expression_to_string(t.child(i));
            if (i < t.num_children() - 1) {
                s += " * ";
            }
        }
        s += ")";
        return s;
    }
    else {
        return t.value();
    }


}