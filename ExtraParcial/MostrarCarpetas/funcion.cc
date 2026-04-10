#include <iostream>
using namespace std;

#include "tree-io.hh"
using namespace pro2;

void aux(Tree<string> t, int indent_size, int k) {
    if (t.empty()) return;
    if (k >= 1) {
        for (int i = 0; i < indent_size * k; i++) {
            cout << " ";
        }
    }
    cout << t.value();
    cout << endl;

    int n = t.num_children();
    for (int i = 0; i < n; i++) {
        aux(t.child(i), indent_size, k+1);
    }
}

/**
 * @brief Mostra un arbre de carpetes i fitxers a la sortida en format 
 * indentat
 *
 * @param t Un arbre de strings a on cada `string` representa una carpeta 
 * o un fitxer.
 * @param indent_size Número d'espais d'indentació per a cada nivell.
 *
 * @pre `indent_size` > 0.
 *
 * @post S'ha mostrat per la sortida estàndard l'arbre `t` amb un nivell
 * d'indentació d'`indent_size` espais per a cada nivell de profunditat.
 */
void print_folders(Tree<string> t, int indent_size) {
    aux(t, indent_size, 0);
    cout << endl;
}