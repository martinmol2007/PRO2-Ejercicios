#include <iostream>
#include <sstream>
#include <set>
using namespace std;

/**
 * @brief Determina si els conjunts de nombres d'A i B
 * tots junts formen una seqüència de nombres consecutius
 * sense forats ni repetits.
 * 
 * @param A Conjunt de nombres
 * @param B Conjunt de nombres
 * 
 * @result bool `true` si els nombres a A i B són consecutius 
 * i `false` altrament.
 */
bool numeros_consecutius(const set<int>& A, const set<int>& B);

// Copy elision: https://en.cppreference.com/w/cpp/language/copy_elision.html
bool read_set(set<int>& S) {
    string linea;
    getline(cin, linea);
    stringstream sn(linea);
    string item;
    S.clear();
    while (sn >> item) {
        S.insert(stoi(item));
    }
    return !S.empty();
}

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);

    set<int> A, B;
    while (read_set(A) && read_set(B)) {
        cout << (numeros_consecutius(A, B) ? "si" : "no") << endl;
    }
}
