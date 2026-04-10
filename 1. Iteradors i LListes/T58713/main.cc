#include <iostream>
#include <list>
#include <sstream>
#include "persona.hh"
using namespace std;

/**
 * @brief Calcula la intersecció de dues llistes ordenades.
 *
 * @param a Llista ordenada ascendentment per DNI.
 * @param b Llista ordenada ascendentment per DNI.
 *
 * @return Llista ordenada ascendentment per DNI amb les persones comunes d'a i b.
 */
list<Persona> interseccio_ordenada(const list<Persona>& a, const list<Persona>& b);

//

list<Persona> llegeix_persones() {
    list<Persona> persones;
    string line;
    while (getline(cin, line) && !line.empty()) {
        string dni, nom;
        istringstream iss(line);
        iss >> dni >> nom;
        persones.push_back(Persona(dni, nom));
    }
    return persones;
}

void escriu_persones(const list<Persona>& persones) {
    for (const Persona& p : persones) {
        cout << p.dni() << " " << p.nom() << endl;
    }
}

int main() {
    list<Persona> a = llegeix_persones();
    list<Persona> b = llegeix_persones();

    list<Persona> result = interseccio_ordenada(a, b);

    escriu_persones(result);
}
