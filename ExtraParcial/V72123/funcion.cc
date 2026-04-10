#include <list>
#include "person.hh"

using namespace std;

/**
 * @brief Uneix dues llistes ordenades preservant l'ordre.
 *
 * Si hi ha persones repetides, només han d'aparèixer un
 * cop al resultat. No hi pot haver dues persones amb el
 * mateix ID i diferent nom.
 *
 * @param a Llista ordenada de persones.
 * @param b Llista ordenada de persones.
 *
 * @return Llista ordenada amb els elements d'a i b sense
 *         repetits.
 */
list<Person> unio_ordenada(const list<Person>& a, const list<Person>& b) {
    list<Person> res;

    auto ita = a.begin();
    auto itb = b.begin();

    while (ita != a.end() && itb != b.end()) {
        if ((*ita).is_less_than((*itb))) {
            res.push_back((*ita));
            ita++;
        }
        else if ((*itb).is_less_than((*ita))) {
            res.push_back((*itb));
            itb++;
        } 
        else {
            res.push_back((*ita));
            ita++;
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