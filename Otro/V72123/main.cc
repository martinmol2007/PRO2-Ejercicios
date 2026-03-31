#include <iomanip>
#include <iostream>
#include <list>
#include <sstream>
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
list<Person> unio_ordenada(const list<Person>& a, const list<Person>& b);

list<Person> read_people() {
    list<Person> people;
    string line;
    while (getline(cin, line) && !line.empty()) {
        string name;
        int ID;
        istringstream iss(line);
        iss >> ID >> name;
        people.push_back(Person(ID, name));
    }
    return people;
}

int main() {
    list<Person> a = read_people(), b = read_people();
    list<Person> result = unio_ordenada(a, b);
    for (const Person& f : result) {
        cout << f.id() << " " << f.name() << " " << endl;
    }
}