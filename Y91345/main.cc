#include <iostream>
#include <sstream>
#include "matrius.hh"
using namespace std;

/**
 * @brief Calcula la transposada d'una MatriuEsparsa.
 *
 * @param S MatriuEsparsa de files.size() files i ncols columnes.
 *
 * @pre S és una MatriuEsparsa vàlida. Les posicions de les caselles van de 0 a S.ncols-1.
 * @post Retorna una nova MatriuEsparsa T amb T.ncols == S.files.size() i
 *       T.files.size() == S.ncols, on T.files[j] conté les caselles
 *       {i, S.files[i][j].valor} de S, ordenades per columna ascendentment.
 */
MatriuEsparsa matriu_esparsa_transposa(const MatriuEsparsa& S) {
    MatriuEsparsa res;

    res.ncols = S.files.size();
    res.files = vector<list<Casella>> (S.ncols);

    for (int i = 0; i < S.files.size(); i++) {
        auto it = S.files[i].begin();
        while (it != S.files[i].end()) {
            Casella c = *it;
            if (c.valor != 0) {
                Casella c2;
                c2.pos = i;
                c2.valor = c.valor;
                res.files[c.pos].push_back(c2);
            }
            it++;
        }
    }
    
    return res;
}

//

MatriuEsparsa matriu_esparsa_llegeix(int n, int ncols) {
    MatriuEsparsa S;
    S.ncols = ncols;
    S.files.resize(n);
    string linia;
    getline(cin, linia); // consume newline after "n ncols"
    for (int i = 0; i < n; ++i) {
        getline(cin, linia);
        istringstream iss(linia);
        char c;
        while (iss >> c) {
            if (c == '.') break;
            // c == '('
            int pos, valor;
            char comma, close;
            iss >> pos >> comma >> valor >> close;
            S.files[i].push_back({pos, valor});
        }
    }
    return S;
}

void matriu_esparsa_escriu(const MatriuEsparsa& S) {
    cout << int(S.files.size()) << " " << S.ncols << "\n";
    for (int i = 0; i < int(S.files.size()); ++i) {
        bool primer = true;
        for (const Casella& c : S.files[i]) {
            if (!primer) cout << " ";
            cout << "(" << c.pos << "," << c.valor << ")";
            primer = false;
        }
        cout << ".\n";
    }
}

int main() {
    int n, ncols;
    cin >> n >> ncols;
    MatriuEsparsa S = matriu_esparsa_llegeix(n, ncols);
    MatriuEsparsa T = matriu_esparsa_transposa(S);
    matriu_esparsa_escriu(T);
}
