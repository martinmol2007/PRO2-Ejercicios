#include <iostream>
#include <string>
#include <map>

using namespace std;

int main () {
    string nombre;
    int cantidad;
    map<string, int> M;

    while (cin >> nombre >> cantidad) {
        auto it = M.find(nombre);
        // Si no esta, l'afegim
        if (it == M.end()) {
            M.insert({nombre, cantidad});
        } else {
            // Ya estaba
            (*it).second = (*it).second + cantidad;
        }
        /*
        M[nombre] += cantidad
        */
    }

    for (auto it = M.begin(); it != M.end(); it++) {
        pair<string,int> p = *it;
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}