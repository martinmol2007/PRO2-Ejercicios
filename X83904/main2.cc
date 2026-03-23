#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

nt main () {
    
    string nombre;
    set<pair<string, vector<string>>> jugadores;

    while (cin >> nombre && nombre != ".") {
        vector<string> v;
        jugadores.insert({nombre, v});
    }
    
    int k;
    cin >> k;

    for (int i = 0; i < k; i++) {
        string act;
        while (cin >> act && act != ".") {
            

        }

    }

}