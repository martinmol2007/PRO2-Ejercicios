#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct Jugador {
    string nom;
    int punts;
};

bool cmp (const Jugador& a, const Jugador& b) {
    if (a.punts != b.punts) {
        return a.punts > b.punts;
    } else {
        return a.nom < b.nom;
    }
}

// Llegeix un jugador de l'entrada.
// Retorna cert si s'ha llegit correctament, fals si s'ha arribat a "---".
bool llegeix_jugador(string& codi, string& nom) {
    cin >> codi;
    if (codi == "---") {
        return false;
    }
    // std::ws és un manipulador que descarta els espais en blanc del flux
    getline(cin >> ws, nom);
    return true;
}

int main() {
    string codi;
    string nom;
    map<string, Jugador> mapa;

    // Leer Jugadores
    while (llegeix_jugador(codi, nom)) {
        mapa.insert({codi, {nom, 0}});
    }

    string algo;
    int n;
    
    // Sumar Puntos
    while (cin >> algo >> n) {
        mapa[algo].punts += n;
    }

    vector<Jugador> v;

    for (auto it = mapa.begin(); it != mapa.end(); it++) {
        v.push_back({it->second.nom, it->second.punts});
    }

    // Ordenar el Ranking
    sort(v.begin(), v.end(), cmp);

    // Sacar el Ranking
    for (int i = 0; i < v.size(); i++) {
        cout << i+1 << ". " << v[i].nom << " - " << v[i].punts << endl;
    }

}
