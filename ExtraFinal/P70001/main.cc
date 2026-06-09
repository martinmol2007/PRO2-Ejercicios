#include <cassert>
#include <iostream>
#include <sstream>
using namespace std;

#if __has_include("program.hh")
#include "program.hh"
#else
#if __has_include("ArbreG.hh")
#include "ArbreG.hh"
#endif
#endif

#include "ArbreG-io.hh"

int main() {
    int ncases;
    cin >> ncases;

    string dummy;
    getline(cin, dummy);
    getline(cin, dummy);

    for (int i = 0; i < ncases; i++) {
        ArbreGen<int> arbol = leer_arbol_int();
        cout << arbol.height() << endl;
    }
}
