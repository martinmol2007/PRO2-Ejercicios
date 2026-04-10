#include "tree.hh"

using namespace std;
using namespace pro2;

/**
 * @brief Calcula l'alçada d'un arbre
 * @param t Un arbre.
 * @returns L'alçada de l'arbre, segons la definició anterior.
 */
int tree_height(Tree<int> t) {
    if (t.empty()) {
        return 0;
    }

    int n = t.num_children();
    int altura = 0;

    for (int i = 0; i < n; i++) {
        altura = max(altura, tree_height(t.child(i)));
    }
    
    return 1 + altura;
}