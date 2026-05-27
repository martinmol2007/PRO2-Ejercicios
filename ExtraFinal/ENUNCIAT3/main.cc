#include "ArbreN.hh"
#include "ArbNIOint.hh"

using namespace std;

int main() {
	int v;
	cin >> v;
	int N;
	while (cin >> N) {
		ArbreNari<int> t(N);
		llegir_arbre_int(t, 0);
		t.completa(v);
		escriure_arbre_int(t);
	}
}