#include <iostream>
#include <vector>
using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
#include "vector-io.hh"
using namespace pro2;


pair<int, vector<int>> inmersio(BinTree<int> t) {
    // 1. Caso base: si el árbol está vacío, altura 0 y vector vacío.
    if (t.empty()) return {0, {}};

    // 2. Bajada: Obtenemos la información de los hijos.
    pair<int, vector<int>> esq = inmersio(t.left());
    pair<int, vector<int>> dre = inmersio(t.right());

    // Creamos el par que vamos a devolver.
    pair<int, vector<int>> actual;

    // 3. Decisión: ¿Quién tiene el camino más largo?
    if (esq.first >= dre.first) {
        // Mi altura es la de mi hijo + 1
        actual.first = esq.first + 1;
        // Mi camino es el de mi hijo (usamos move para que sea rápido)
        actual.second = move(esq.second);
    } else {
        actual.first = dre.first + 1;
        actual.second = move(dre.second);
    }

    // 4. Construcción: Ponemos el valor de este nodo AL PRINCIPIO del camino.
    // Usamos insert(posicion, valor)
    actual.second.insert(actual.second.begin(), t.value());

    return actual;
}
vector<int> longest_leftmost_path(BinTree<int> t) {
    return inmersio(t).second;
}