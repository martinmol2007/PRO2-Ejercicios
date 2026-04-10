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

    auto it2 = L2.begin();
    bool trobat = false;
    int s = *(L1.begin());

    while (it2 != L2.end() and not trobat) {
        if (*it2 == s) trobat = true;
        else it2++;
    }
    if (trobat) {
        auto it1 = L1.begin();
        bool igual = true;
        while (it1 != L1.end() and igual) {
            if (*it1 != *it2) igual = false;
            it1++;
            it2++;
            if (it2 == L2.end()) it2 = L2.begin();
        }
        return igual;
    } else {
        return false;
    }
}