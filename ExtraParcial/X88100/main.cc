#include <iostream>
#include <list>
#include <sstream>
using namespace std;

/**
 * @brief Insereix un valor en una llista ordenada.
 *
 * @param L Llista d'enters ordenada ascendentment.
 * @param x Valor a inserir.
 * @pre L està ordenada ascendentment.
 * @post L conté x i segueix ordenada ascendentment.
 */
void inserta_per_ordre(list<int>& L, int x);

list<int> llegeix_llista() {
    list<int> L;
    string line;
    getline(cin, line);
    istringstream iss(line);
    int val;
    while (iss >> val) {
        L.push_back(val);
    }
    return L;
}

void mostra_llista(const list<int>& L) {
    auto it = L.begin();
    if (it == L.end()) {
        cout << "<buida>" << endl;
        return;
    }
    cout << *it;
    for (++it; it != L.end(); ++it) {
        cout << " " << *it;
    }
    cout << endl;
}

int main() {
    list<int> L = llegeix_llista();

    int x;
    cin >> x;

    // Cridem la funció d'interès
    inserta_per_ordre(L, x);

    mostra_llista(L);

    return 0;
}