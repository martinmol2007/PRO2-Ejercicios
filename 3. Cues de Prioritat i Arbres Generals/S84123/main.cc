#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/**
 * @brief Fusiona K llistes ordenades descendentment en una sola llista ordenada
 * descendentment.
 *
 * @param llistes Vector de K llistes, cadascuna ordenada descendentment.
 * @pre Cada llista de `llistes` està ordenada en ordre descendent.
 * @post Retorna una llista amb tots els elements de totes les llistes,
 * ordenada descendentment.
 */
list<int> fusiona_llistes(const vector<list<int>>& llistes);

list<int> llegeix_llista() {
    list<int> L;
    string linia;
    getline(cin, linia);
    istringstream iss(linia);
    int x;
    while (iss >> x) {
        L.push_back(x);
    }
    return L;
}

void escriu_llista(const list<int>& L) {
    bool primer = true;
    for (int x : L) {
        if (not primer) {
            cout << ' ';
        }
        cout << x;
        primer = false;
    }
    cout << endl;
}

int main() {
    int K;
    cin >> K;
    cin.ignore();

    vector<list<int>> llistes(K);
    for (int i = 0; i < K; ++i) {
        llistes[i] = llegeix_llista();
    }

    list<int> resultat = fusiona_llistes(llistes);
    escriu_llista(resultat);
}
