#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct Jugador {
    string nom;
    int punts;
    int ranking;
};

struct Info {
    string codi;
    string nom;
    int punts;
};

bool cmp_v(const Info& a, const Info& b) {
    if (a.punts != b.punts) return a.punts > b.punts;
    return a.nom < b.nom;
}

bool cmp_v2(const Jugador& a, const Jugador& b) {
    if (a.punts != b.punts) return a.punts > b.punts;
    return a.nom < b.nom;
}

// Llegeix un jugador de l'entrada.
// Retorna cert si s'ha llegit correctament, fals si s'ha arribat a "---".
bool llegeix_jugador(string& codi, string& nom, int& punts) {
    cin >> codi;
    if (codi == "---") return false;
    cin >> punts;
    getline(cin >> ws, nom);
    return true;
}

int main() {
    string codi, nom;
    int punts;

    map<string, Jugador> mapa;
    vector<Info> v;

    while (llegeix_jugador(codi, nom, punts)) {
        mapa[codi] = {nom, punts, 0};
        v.push_back({codi, nom, punts});
    }

    sort(v.begin(), v.end(), cmp_v);

    for (int i = 0; i < v.size(); ++i) {
        mapa[v[i].codi].ranking = i + 1;
    }

    string algo;
    int n;

    while (cin >> algo >> n) {
        mapa[algo].punts += n;
    }

    vector<Jugador> aux;
    
    for (auto it = mapa.begin(); it != mapa.end(); ++it) {
        aux.push_back(it->second);
    }

    sort(aux.begin(), aux.end(), cmp_v2);

    for (int i = 0; i < aux.size(); ++i) {
        int nou_ranking = i + 1;
        int antic_ranking = aux[i].ranking;

        cout << nou_ranking << ". " << aux[i].nom << " - " << aux[i].punts << " [";

        if (antic_ranking > nou_ranking) {
            cout << "+" << antic_ranking - nou_ranking;
        }
        else if (antic_ranking < nou_ranking) {
            cout << "-" << nou_ranking - antic_ranking;
        }
        else {
            cout << "=";
        }

        cout << "]" << endl;
    }
}