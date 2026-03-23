#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

void imprimir (const set<string>& s) {
    for (auto it2 = s.begin(); it2 != s.end(); it2++) {
        cout << " " << (*it2);
    }
    cout << endl;
    return;
}

int main () {
    string nombre;
    int fecha;
    string ciudad;

    map<pair<int, string>, set<string>> mapa;

    while (cin >> nombre >> fecha >> ciudad) {
        mapa[{fecha, ciudad}].insert(nombre);
    }

    for (auto it = mapa.begin(); it != mapa.end(); ++it) {
        if (it->second.size() > 1) {
            cout << it->first.first << " " << it->first.second << ":"; // Saca el año y la ciudad
            imprimir(it->second); // Saca los turistas
        }
    }
    return 0;
}