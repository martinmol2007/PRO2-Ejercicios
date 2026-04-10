#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main () {
    string comando;

    map<int, int> mon_per;
    map<string, int> per_nom;

    while (cin >> comando) {
        if (comando == "ADD") {
            string nombre;
            cin >> nombre;

            int num;
            cin >> num;

            per_nom[nombre] = num;
            mon_per[num]++;

        }
        else if (comando == "DELETE") {;
            string nombre;
            cin >> nombre;

            auto it = per_nom.find(nombre);
            int mon = it->second;
            per_nom.erase(it);

            mon_per[mon]--;

        }
        else { // NUMPEOPLE numcoins (saca el numero de personas)
            int n;
            cin >> n;

            auto it = mon_per.find(n);
            if (it != mon_per.end()) {
                cout << it->second << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
}