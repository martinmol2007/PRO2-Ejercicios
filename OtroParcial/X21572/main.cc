#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {
    string comando;

    map<string, int> mapa;
    // First: Nombre | Second: Dinero
    set<string> negativos;
    // Las personas que tienen numeros negativos

    while (cin >> comando) {
        if (comando == "PEOPLEINRED") {
            for (auto it = negativos.begin(); it != negativos.end(); it++) {
                if (it != negativos.begin()) cout << " ";
                cout << *it;
            }
            cout << endl;
        }
        else if (comando == "NUMBERINRED") {
            cout << negativos.size() << endl;
        }
        else { // TRANSACTION nom diners
            string nom;
            int n;
            cin >> nom >> n;

            mapa[nom] += n;

            auto it = mapa.find(nom);
            auto it2 = negativos.find(nom);

            if (it->second < 0) {
                if (it2 == negativos.end()) negativos.insert(nom);
            }
            else { // Tiene dinero positivo
                if (it2 != negativos.end()) negativos.erase(it2);
            }
        }
    }
    
    return 0;
}