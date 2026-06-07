#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

#include "BinTree.hh"

int getIdVar(string s)
{
	return atoi(s.substr(1).c_str());
}

int main() {
	string s1, s2, s3, s4, s5, s6, s7;
	int numvars;
	cin >> s1 >> numvars >> s2;

    // PARAMETROS

    // En cada posicion del vector, hay un BinTree
    vector<BinTree<int>> vars(numvars);
    // En cada posicion del vector, hay un BinTree con el size de los arboles
    vector<BinTree<int>> size(numvars, BinTree<int>(0));
    // En cada posicion del vector, hay un BinTree con las sumas del arbol
    vector<BinTree<int>> sumas(numvars, BinTree<int>(0));

	while (cin >> s1 >> s2) {
		if (s1[0] == 't') {
			int idvar = getIdVar(s1);
			if (s2 == "=BinTree(") {
				int value;
				cin >> value >> s3 >> s4 >> s5 >> s6 >> s7;
				int idvar1 = getIdVar(s4); // Izquerdo
				int idvar2 = getIdVar(s6); // Derecho

                // Juntar Arboles

                vars[idvar] = BinTree<int>(value, vars[idvar1], vars[idvar2]);

                // Actualizar los sizes
                int size_izq = size[idvar1].value();
                int size_der = size[idvar2].value();
                size[idvar] = BinTree<int>(1+size_izq+size_der, size[idvar1], size[idvar2]);

                // Actualizar las sumas
                
                int suma_izq = sumas[idvar1].value();
                int suma_der = sumas[idvar2].value();
                sumas[idvar] = BinTree<int>(value + suma_izq + suma_der, sumas[idvar1], sumas[idvar2]);
            
			} else if (s2 == "=") {
				cin >> s3 >> s4;
				int idvar1 = getIdVar(s3);
				if (s4 == ".left();") {
					vars[idvar] = vars[idvar1].left(); 
                    size[idvar] = size[idvar1].left();
                    sumas[idvar] = sumas[idvar1].left();
				} else {
					vars[idvar] = vars[idvar1].right(); 
                    size[idvar] = size[idvar1].right();
                    sumas[idvar] = sumas[idvar1].right();
				}
			}
		} else if (s1 == "cout<<") {
			int idvar = getIdVar(s2);
			cin >> s3;
			
			vars[idvar].setOutputFormat(BinTree<int>::INLINEFORMAT);
			cout << vars[idvar] << endl;
		} else if (s1 == "cout<<size(") {
			int idvar = getIdVar(s2);
			cin >> s3;
            cout << size[idvar].value() << endl;
		} else if (s1 == "cout<<sum(") {
			int idvar = getIdVar(s2);
			cin >> s3;
            cout << sumas[idvar].value() << endl;
		}
	}
}