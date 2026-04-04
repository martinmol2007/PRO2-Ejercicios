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
    list<Person> lista;
    auto it1 = a.begin();
    auto it2 = b.begin();

    while (it1 != a.end() && it2 != b.end()) {
        if ((*it1).is_equal_to(*it2)) {
            lista.push_back(*it1);
            it1++;
            it2++;
        } else if ((*it1).is_less_than((*it2))) {
            lista.push_back(*it1);
            it1++;
        } else {
            lista.push_back(*it2);
            it2++;
        }
    }

    while (it1 != a.end()) {
        lista.push_back(*it1);
        it1++;
    }

    while (it2 != b.end()) {
        lista.push_back(*it2);
        it2++;
    }

    return lista;
}