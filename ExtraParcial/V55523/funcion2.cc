#include <iostream>
#include <list>

using namespace std;

/**
 * @pre  cierto
 * @post se devuelve si l1 y l2 son iguales de forma circular
 */
bool circularly_equal(const list<int>& L1, const list<int>& L2) {
    if (L1.size() != L2.size()) return false;
    if (L1.empty() && L2.empty()) return true;

    for (auto it = L1.begin(); it != L1.end(); ++it) {
        auto it1 = it;
        auto it2 = L2.begin();
        int cont = 0;

        while (cont < L1.size() && *it1 == *it2) {
            it1++;
            it2++;
            cont++;

            if (it1 == L1.end()) it1 = L1.begin();
        }
        if (cont == L1.size()) return true;
    }
    return false;
}