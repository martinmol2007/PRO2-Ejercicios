#include <iostream>
using namespace std;

#include "tree-io.hh"
using namespace pro2;

void aux (Tree<string> t, int indent_size, int h) {
    if (t.empty()) {
        return;
    }

    for (int j = 0; j < indent_size * h; j++) {
        cout << " ";
    }
    cout << t.value() << endl;
    h += 1;

    for (int i = 0; i < t.num_children(); i++) {
        aux(t.child(i), indent_size, h);
    }
    
}

/**
 * @brief Mostra un arbre de carpetes i fitxers a la sortida en format 
 * indentat
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
    int h = 0;
    aux (t, indent_size, h);
    cout << endl;
}