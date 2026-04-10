#include "fruit.hh"
#include <list>

using namespace std;

/**
 * @brief Fusiona dues llistes ordenades preservant l'ordre.
 * 
 * @param a Llista ordenada.
 * @param b Llista ordenada.
 * 
 * @return Llista ordenada amb els elements d'a i b.
 */
list<Fruit> fusio_ordenada(const list<Fruit>& a, const list<Fruit>& b) {
    list<Fruit> res;

    auto ita = a.begin();
    auto itb = b.begin();

    while (ita != a.end() && itb != b.end()) {
        if ((*ita).is_greater_than((*itb))) {
            res.push_back((*ita));
            ita++;
        }
        else {
            res.push_back((*itb));
            itb++;
        }
    }

    while (ita != a.end()) {
        res.push_back((*ita));
        ita++;
    }

    while (itb != b.end()) {
        res.push_back((*itb));
        itb++;
    }

    return res;
}