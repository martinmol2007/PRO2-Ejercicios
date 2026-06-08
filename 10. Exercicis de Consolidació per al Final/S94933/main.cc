#include <iostream>
using namespace std;

#if __has_include("program.hh")
#include "program.hh"
#else
#if __has_include("Arbre.hh")
#include "Arbre.hh"
#endif
#endif

bool llegir_arbre_int(Arbre<int>& a, string marca) {
    /* Pre: a es buit */
    /* Post: a conté l'arbre llegit de l'entrada */
    Arbre<int> a1;
    Arbre<int> a2;
    string x;
    if (not(cin >> x)) {
        return false;
    }
    if (x != marca) {
        if (not llegir_arbre_int(a1, marca)) {
            return false;
        }
        if (not llegir_arbre_int(a2, marca)) {
            return false;
        }
        a.plantar(atoi(x.c_str()), a1, a2);
    }
    return true;
}

int main() {
    Arbre<int> a;
    while (llegir_arbre_int(a, "#")) {
        // NOTE(pauek): Repeat 100 times just to exaggerate execution time (vs i/o time)
        bool result;
        for (int i = 0; i < 100; i++) {
            result = a.ordered(); 
        }
        cout << result << endl;
        a.a_buit();
    }
}
