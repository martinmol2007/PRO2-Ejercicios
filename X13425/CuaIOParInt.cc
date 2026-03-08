#include "CuaIOParInt.hh"
#include <iostream>
#include <queue>

using namespace std;

// Pre: c és buida; el canal estandar d’entrada conté un nombre
// parell d’enters, acabat pel parell 0 0
// Post: s’han encuat a c els elements llegits fins al 0 0 (no inclòs)
void llegirCuaParInt(queue<ParInt>& c) {
    ParInt p;
    while (p.llegir()) {
        c.push(p);
    }
}

// Pre: cert
// Post: s’han escrit al canal estandar de sortida els elements de c
void escriureCuaParInt(queue<ParInt> c) {
    while (not c.empty()) {
        ParInt p = c.front();
        p.escriure();
        c.pop();
        // c.front().escriure()
        // c.pop()
        
    }
}
