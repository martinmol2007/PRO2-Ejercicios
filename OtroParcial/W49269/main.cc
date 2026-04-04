#include <iostream>
#include <string>
#include <map>

using namespace std;

int main () {
    string nom;
    string op;
    map<string, int> mapa; 
    // First: Nombre Second: Dinero que tiene

    while (cin >> nom >> op) {
        if (op == "enters") {
            auto it = mapa.find(nom);
            if (it == mapa.end()) {
                mapa.insert({nom, 0});
            }
        } else if (op == "leaves") {
            auto it = mapa.find(nom);
            if (it != mapa.end()) {
                cout << nom << " has won " << it->second << endl;
                mapa.erase(it);
            }
        } else { // wins
            int x;
            cin >> x;

            auto it = mapa.find(nom);
            if (it != mapa.end()) {
                it->second += x;
            }
        }
    }
    cout << endl;

    for (auto it = mapa.begin(); it != mapa.end(); it++) {
        cout << it->first << " is winning " << it->second << endl;
    }
    
    return 0;
}