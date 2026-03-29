#include <iostream>
using namespace std;

#include "tree-io.hh"
using namespace pro2;

/**
 * @brief Mostra un arbre de carpetes i fitxers a la sortida en format 
 * indentat
 *
 *
 * Cal notar que la última línia és buida per poder veure la separació 
 * amb altres arbres de carpetes
 *
 * Malgrat això no és rellevant per al problema, les fulles de l'arbre 
 * són fitxers o carpetes i la resta són sempre carpetes.
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
void aux(Tree<string> t, int indent_size, int h) {
    if (t.empty()) {
        return;
    }

    for (int i = 0; i < indent_size * h; i++) cout << " ";
    cout << t.value() << endl; 

    int n = t.num_children();

    for (int i = 0; i < n; i++) {
        aux(t.child(i), indent_size, h+1);
    }
}

void print_folders(Tree<string> t, int indent_size) {
    aux(t, indent_size, 0);
    cout << endl;
}