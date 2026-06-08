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
    string dummy;
    int ncases;
    cin >> ncases;

    string empty_line;
    getline(cin, empty_line);
    getline(cin, empty_line);

    for (int i = 0; i < ncases; i++) {
        ArbreGen<int> arbol = leer_arbol_int();
        cout << arbol.count_leaves() << endl;
    }
}
