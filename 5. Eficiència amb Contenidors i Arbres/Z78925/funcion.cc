#include <map>
using namespace std;

#include "util.hh"

#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

/**
 * @brief Avalua una expressió binària amb variables
 *
 * L'expressió és sobre els naturals i els operadors `+`, `-`, i `*`.
 * A més, hi ha un diccionari `env` que emmagatzema els valors d'un
 * conjunt de variables que poden aparèixer a l'arbre.
 *
 * @pre `t` és no buit. Totes les variables que apareixen a `t`
 *       estan definides a `env`. Les opercions expressades per
 *       l'arbre no produeixen errors d'_overflow_
 * 
 * @param t Arbre amb l'expressió binària.
 * @param env Diccionari amb parelles (nom de variable, valor). Aquest 
 *            diccionari no es pot modificar.
 */
int tree_eval_env(BinTree<string> t, const map<string, int>& env) {
    if (t.left().empty() && t.right().empty()) { // Es una hoja
        if (is_number(t.value())) { // Es un numero
            return string_to_int(t.value());
        } else { // Es una variable
            auto it = env.find(t.value());
            return (*it).second;
        }
    } else {
        int l = tree_eval_env(t.left(), env);
        int r = tree_eval_env(t.right(), env);

        string op = t.value();

        if (op == "+") {
            return l + r;
        } else if (op == "-") {
            return l - r;
        } else { // op == "*"
            return l * r;
        }
    } 
}