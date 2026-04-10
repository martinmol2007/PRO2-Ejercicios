#include <iostream>
#include <string>
#include <map>

using namespace std;

int main () {
    string nombre, comando;

    map<string, int> mapa;

    while (cin >> nombre >> comando) {
        if (comando == "enters") {
            if (mapa.find(nombre) == mapa.end()) {
                mapa.insert({nombre, 0});
            } else {
                cout << nombre << " is already in the casino" << endl;
            }
        }
        else if (comando == "wins") {
            int n;
            cin >> n;
            if (mapa.find(nombre) != mapa.end()) {
                mapa[nombre] += n;
            } else {
                cout << nombre << " is not in the casino" << endl;
            }
        } 
        else if (comando == "leaves") {
            auto it = mapa.find(nombre);
            if (it != mapa.end()) {
                cout << nombre << " has won " << it->second << endl;
                mapa.erase(it);
            } else {
                cout << nombre << " is not in the casino" << endl;
            }
        }
    }
    cout << "----------" << endl;

    for (auto it = mapa.begin(); it != mapa.end(); it++) {
        cout << it->first << " is winning " << it->second << endl;
    }

    return 0;
}