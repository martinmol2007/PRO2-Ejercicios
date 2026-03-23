#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;


int main () {
    string nombres;
    vector<string> v;

    set<pair<string, vector<string>>> jugadores;

    // Lee las personas
    while (cin >> nombres && nombres != ".") {
        v.push_back(nombres);
    }

    // Lee las listas de actividades
    int k;
    cin >> k;

    vector< set<string> > act(k);
    for (int i = 0; i < k; i++) {
        string jugadores;
        while (cin >> jugadores && jugadores != ".") {
            act[i].insert(jugadores);
        }
    }

    vector<string> todos;
    vector<string> cap;

    for (int i = 0; i < v.size(); i++) {
        string nombre = v[i];
        int cont = 0;
        for (int j = 0; j < act.size(); j++) {
            auto it = act[j].find(nombre);
            if (it != act[j].end()) cont++;
        }
        if (cont == k) todos.push_back(nombre);
        if (cont == 0) cap.push_back(nombre);
    }

    cout << "Totes les activitats:";
    for (int i = 0; i < todos.size(); i++) {
        cout << " " << todos[i];
    }
    cout << endl;

    cout << "Cap activitat:";
    for (int i = 0; i < cap.size(); i++) {
        cout << " " << cap[i];
    }
    cout << endl;

}