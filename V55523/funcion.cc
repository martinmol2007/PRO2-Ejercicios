#include <cassert>
#include <iostream>
#include <list>
#include <sstream>

using namespace std;

/**
 * @pre  cierto
 * @post se devuelve si l1 y l2 son iguales de forma circular
 */
bool circularly_equal(const list<int>& L1, const list<int>& L2) {
    if (L1.size() != L2.size()) return false;
    if (L1 == L2) return true;
    
    auto it1 = L1.begin();
    
    auto cmp = L2.end();
    cmp--;
    
    auto it2 = L2.begin();

    if (*it1 != *cmp) return false;
    it1++;

    while (it2 != L2.end()) {
        if (*it1 != *it2) return false;

        it1++;
        it2++;
    }
    return true;
}