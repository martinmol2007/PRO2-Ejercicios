#include <iostream>
#include <sstream>
#include "assert.hh"
#include "matrius.hh"
using namespace std;

/**
 * @brief Calcula la suma de dues MatriuEsparsa.
 *
 * @param A MatriuEsparsa de A.files.size() files i A.ncols columnes.
 * @param B MatriuEsparsa de B.files.size() files i B.ncols columnes.
 *
 * @pre A i B són matrius esparses correctes. Les dimensions d'A i B són iguals.
 *
 * @post Retorna una nova MatriuEsparsa C on C.files[i] és la suma de
 *       A.files[i] i B.files[i], conservant només els elements no nuls,
 *       ordenats per columna ascendentment.
 */
MatriuEsparsa suma_matrius_esparses(const MatriuEsparsa& A, const MatriuEsparsa& B) {
    assert(A.ncols == B.ncols && A.files.size() == B.files.size(),"suma_matrius_esparses: dimensions diferents!");

    MatriuEsparsa res;
    res.ncols = A.ncols;
    res.files = vector<list<Casella>>(A.files.size());

    for (int i = 0; i < (int)A.files.size(); ++i) {
        auto it1 = A.files[i].begin();
        auto it2 = B.files[i].begin();

        while (it1 != A.files[i].end() && it2 != B.files[i].end()) {
            if ((*it1).pos == (*it2).pos) {
                int suma = (*it1).valor + (*it2).valor;
                if (suma != 0) {
                    Casella c;
                    c.pos = (*it1).pos;
                    c.valor = suma;
                    res.files[i].push_back(c);
                }
                ++it1;
                ++it2;
            }
            else if ((*it1).pos < (*it2).pos) {
                res.files[i].push_back(*it1);
                ++it1;
            }
            else { // (*it2).pos < (*it1).pos
                res.files[i].push_back(*it2);
                ++it2;
            }
        }

        while (it1 != A.files[i].end()) {
            res.files[i].push_back(*it1);
            ++it1;
        }

        while (it2 != B.files[i].end()) {
            res.files[i].push_back(*it2);
            ++it2;
        }
    }

    return res;
}

