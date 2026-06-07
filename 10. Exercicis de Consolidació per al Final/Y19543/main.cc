#include <iostream>
using namespace std;

#if __has_include("program.hh")
#include "program.hh"
#elif __has_include("Arbre.hh")
#include "Arbre.hh"
#endif

/**
 * @pre: `a` és buit
 * @post: `a` conté l'arbre llegit de l'entrada
 */
bool llegir_arbre_int(Arbre<int>& a, string marca) {
	Arbre<int> a1, a2;
	string x;
	if (not (cin >> x)) {
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

void escriure_arbre(Arbre<int>& a) {
	if (a.es_buit()) {
		cout << "# ";
	} else {
		Arbre<int> ai, ad;
		cout << a.arrel() << " ";
		a.fills(ai, ad);
		escriure_arbre(ai);
		escriure_arbre(ad);
	}
}

int main() {
	Arbre<int> a;
	while (llegir_arbre_int(a, "#")) {
		a.esborrar_fulles();
		escriure_arbre(a);
		cout << endl;
		a.a_buit();
	}
}
