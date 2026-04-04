#include <list>
using namespace std;

/**
 * @brief Insereix un valor en una llista ordenada.
 *
 * @param L Llista d'enters ordenada ascendentment.
 * @param x Valor a inserir.
 * @pre L està ordenada ascendentment.
 * @post L conté x i segueix ordenada ascendentment.
 */
void inserta_per_ordre(list<int>& L, int x) {
    auto it = L.begin();
    bool fin = false;

    while (it != L.end() && not fin) {
        if (*it < x) ++it;
        else fin = true;
    }
    L.insert(it, x);
}
