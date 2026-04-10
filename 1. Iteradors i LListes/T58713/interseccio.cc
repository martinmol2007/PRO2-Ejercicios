#include <list>
#include <string>
#include "persona.hh"
using namespace std;

list<Persona> interseccio_ordenada(const list<Persona>& a, const list<Persona>& b) {
    list<Persona> res;

    list<Persona>::const_iterator it1 = a.begin();
    list<Persona>::const_iterator it2 = b.begin();
    
    while (it1 != a.end() && it2 != b.end()) {
        Persona a = *it1;
        Persona b = *it2;
        
        if (a.dni() != b.dni()) {
            // Tenemos que seleccionar el que tenga el DNI mas pequeño y avanzarlo
            if(a.dni() > b.dni()) {
                it2++;
            } else {
                it1++;
            }
        } else {
            res.push_back(a);
            it1++;
            it2++;
        }
    }
    return res;
}