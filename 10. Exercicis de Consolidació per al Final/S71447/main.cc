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
    string linea;
    while (getline(cin, linea)) {
        istringstream sin(linea);
        string comando;
        int elemento;
        sin >> comando >> elemento;
        assert(comando == "comptar");
        ArbreGen<int> arbol = leer_arbol_int();
        int num_iguales = arbol.count_equal_to(elemento);
        cout << num_iguales << endl;
    }
}
