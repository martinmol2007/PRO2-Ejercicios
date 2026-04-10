#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main () {
    string palabra;
    map<string, set<string>> mapa;
    // first: firma // second: palabras con la misma firma

    while (cin >> palabra) {
        // Copia es la copia de la palabra
        string copia = palabra;
        // Palabra pasa a ser la firma
        sort(palabra.begin(), palabra.end());
        // Insertar porfirma
        mapa[palabra].insert(copia);
    }
    
    for (auto it = mapa.begin(); it != mapa.end(); it++) {
        cout << it->first << ":";
        for (auto it2 = it->second.begin(); it2 != it->second.end(); it2++) {
            cout << " " << (*it2);
        }
        cout << endl;
    }
    return 0;
}