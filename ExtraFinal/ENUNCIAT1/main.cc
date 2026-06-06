#include "ArbreN.hh"
#include "ArbNIOint.hh"
using namespace std;

int main(){
	int N;
	while(cin >> N){
		ArbreNari<int> t(N);
		llegir_arbre_int(t, 0);
		if(t.es_complet()) cout << "SI" << endl;
		else cout << "NO" << endl;
	}
}
