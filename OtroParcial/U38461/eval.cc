#include <iostream>
#include <string>
#include "bintree.hh"
#include "util.hh"

using namespace std;
using namespace pro2;
/**
 * @brief Avalua un arbre no buit que representa una expressió.
 *
 * L'expressió és sobre els naturals i els operadors +, -, i *. 
 * Les operacions de l'arbre no produeixen errors d'_overflow_ (sobreeiximent).
 *
 * @pre L'arbre és no buit i l'expressió és correcta.
 *
 * @param t Arbre que representa l'expressió.
 * @return Resultat de l'avaluació de l'expressió.
 */
int evaluate(BinTree<string> t) {
    if (t.left().empty() && t.right().empty()) { // Es una hoja (numero)
        return string_to_int(t.value());
    }

    if (t.value() == "+") {
        return evaluate(t.left()) + evaluate(t.right());
    }
    else if (t.value() == "*") {
        return evaluate(t.left()) * evaluate(t.right());
    } else {
        return evaluate(t.left()) - evaluate(t.right());
    }
}