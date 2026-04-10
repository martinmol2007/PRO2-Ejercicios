#include <iostream>
#include <string>
#include <map>

using namespace std;

int main () {
    string name;
    string comando;
    // First: Nombre | Second: Dinero
    map<string, int> mapa; 

    while (cin >> name >> comando) {
        if (comando == "enters") {
            auto it = mapa.find(name);
            if (it == mapa.end()) {
                mapa.insert({name, 0});
            }
        }
        else if (comando == "leaves") {
            auto it = mapa.find(name);
            if (it != mapa.end()) {
                cout << name << " has won " << it->second << endl;
                mapa.erase(it);
            }
        }
        else if (comando == "wins") {
            int n;
            cin >> n;
            auto it = mapa.find(name);
            if (it != mapa.end()) {
                it->second += n;
            }
        }
    }
    cout << endl;

    auto it = mapa.begin();

    while (it != mapa.end()) {
        cout << it->first << " is winning " << it->second << endl;
        it++;
    }

    return 0;
}