#include <iostream>
#include <list>
#include "matrius.hh"
using namespace std;

/**
 * @brief Converteix una Matriu en una MatriuEsparsa.
 *
 * @param M Matriu rectangular de mida n x m.
 *
 * @pre M pot ser qualsevol matriu rectangular (incloent buida).
 * @post Retorna una MatriuEsparsa S amb S.ncols == m i S.files.size() == n,
 *       on S.files[i] conté, ordenades per columna ascendentment, les caselles
 *       {pos, valor} dels elements no nuls de la fila i de M.
 */
MatriuEsparsa matriu_converteix_a_esparsa(const Matriu& M) {
    int filas = M.size();
    int columnas = M[0].size();

    vector<list<Casella>> v (filas);
    
    MatriuEsparsa m;
    m.ncols = columnas;
    m.files = v;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            int num = M[i][j];
            if (num != 0) {
                Casella c;
                c.pos = j;
                c.valor = num;
                m.files[i].push_back(c);
            }
        }
    }
    return m;
}
