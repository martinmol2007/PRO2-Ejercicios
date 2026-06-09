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
    Arbre<int> a1, a2;
    string x;
    if (not(cin >> x)) return false;
    if (x != marca) {
        if (not llegir_arbre_int(a1, marca)) return false;
        if (not llegir_arbre_int(a2, marca)) return false;
        a.plantar(atoi(x.c_str()), a1, a2);
    }
    return true;
}

int main() {
    Arbre<int> a;
    while (llegir_arbre_int(a, "#")) {
        cout << (a.all_leaves_same_depth() ? "si" : "no") << endl;
        a.a_buit();
    }
}
