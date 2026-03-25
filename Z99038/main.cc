#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

struct Jugador {
    string nom;
    int punts;
};

bool operator> (const Jugador& a, const Jugador& b) {
    if (a.punts == b.punts) return a.nom < b.nom;
    else return a.punts > b.punts;
}


int main() {

    string codi;
    string nombre, apellido;

    map<string, Jugador> mapa;
    // First: Codi // Second: Nombre y Apellido + Puntos

    while (cin >> codi && codi != "---") {
        cin >> nombre >> apellido;

        Jugador j;
        j.nom = nombre + " " + apellido;
        j.punts = 0;

        mapa.insert({codi, j});
    }

    string codigo;
    char simbolo;
    int n;
    
    while (cin >> codigo >> simbolo >> n) {
        if (simbolo == '+') {
            mapa[codigo].punts += n;
        }
        else {
            mapa[codigo].punts -= n;
        }
    }
    
    
    set<Jugador> s;

    for (auto it = mapa.begin(); it != mapa.end(); it++) {
        int p = it->second.punts;
        string no = it->second.nom;
        Jugador j = {no, p};
        s.insert(j);
    }

    for (auto it2 = s.begin(); it2 != s.end(); it2++) {
        cout << it2->nom << " " << it2->punts << endl;
    }

    return 0;
}
