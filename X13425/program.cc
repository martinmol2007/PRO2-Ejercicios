#include <iostream>
#include <queue>

#include "CuaIOParInt.hh"
#include "ParInt.hh"

using namespace std;

void distribucio (queue<ParInt>& c, queue<ParInt>& c1, queue<ParInt>& c2) {
    int t1 = 0; // Tiempo de espera en la cola 1
    int t2 = 0; // Tiempo de espera en la cola 2

    while (not c.empty()) {
        ParInt p = c.front();
        if (t1 <= t2) { // Menos tiempo de espera en Cola 1
            c1.push(p);
            t1 += p.segon();
        } else {
            c2.push(p);
            t2 += p.segon();
        }
        c.pop();
    }
}

int main () {
    queue<ParInt> c, c1, c2;
    llegirCuaParInt(c);

    distribucio(c, c1, c2);

    escriureCuaParInt(c1);
    cout << endl;
    escriureCuaParInt(c2);
}