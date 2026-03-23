#include <iostream>
#include <list>
#include "person.hh"

#include <set>

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
    // Com que dues persones no poden tenir el mateix ID, farem un set e IDs per comprobar si ya han sortit

    list<Person> lista;
    set<int> ids;

    auto ita = a.begin();
    auto itb = b.begin();

    while (ita != a.end() && itb != b.end()) {
        if (ita->is_less_than(*(itb))) {
            if (ids.find(ita->id()) == ids.end()) {
                lista.insert(lista.end(), *(ita));
                ids.insert(ita->id());
            }
            ita++;
        } else {
            if (ids.find(itb->id()) == ids.end()) {
                lista.insert(lista.end(), *(itb));
                ids.insert(itb->id());
            }
            itb++;
        }
    }

    while (ita != a.end()) {
        if (ids.find(ita->id()) == ids.end()) {
                lista.insert(lista.end(), *(ita));
                ids.insert(ita->id());
            }
        ita++;
    }

    while (itb != b.end()) {
        if (ids.find(itb->id()) == ids.end()) {
                lista.insert(lista.end(), *(itb));
                ids.insert(itb->id());
            }
        itb++;
    }






    return lista;
    
}