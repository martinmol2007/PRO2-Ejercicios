#include <iostream>
#include <map>

using namespace std;

int main () {
    string op;
    map<int, int> num; // Numero de personas (seconds), con un numero de monedas (first)
    map<string, int> nombre; // Guarda el nombre y sus monedas

    while (cin >> op) {
        if (op == "NUMPEOPLE") {
            int monedas;
            cin >> monedas;

            auto it = num.find(monedas);

            if (it == num.end()) {
                cout << 0 << endl;
            } else {
                cout << it->second << endl;
            }
        } 
        else {
            string name;
            cin >> name;

            
            if (op == "ADD") {
                int monedas;
                cin >> monedas;
                nombre[name] = monedas; // Poner la persona con esa cantidad de monedas
                num[monedas]++; // Añadir uno a los que tiene las mismas monedas
            }
            else {
                auto it = nombre.find(name);
                int n = it->second;
                nombre.erase(it);
                num[n]--;
            }
        }
    }
}