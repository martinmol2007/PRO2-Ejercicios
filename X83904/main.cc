#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main () {
    string nombres;
    vector<string> v;


    // Lee las personas
    while (cin >> nombres && nombres != ".") {
        v.push_back(nombres);
    }

    // Lee las listas de actividades
    int k;
    cin >> k;

    vector<set<string>> act (k);
    for (int i = 0; i < k; i++) {
        string jugadores;
        while (cin >> jugadores && jugadores != ".") {
            act[i].insert(jugadores);
        }
    }

    

}