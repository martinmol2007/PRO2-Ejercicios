#include <iostream>
#include <map>
#include <list>

using namespace std;

int main () {
    string name;
    int num;

    map<string, int> users; // Guardamos los usuarios (clave) con el numero
    map<int, list<string> > lnum; // Guardamos el numero (clave) y los usuarios asociados a ese numero

    while (cin >> name >> num) {
        users.insert({name, num});
        lnum[num].push_back(name);
    }

    for (auto it = users.begin(); it != users.end(); it++) {
        cout << (*it).first;
        int valor = (*it).second;   // Numero asociado al usuario
        
        auto it2 = lnum.find(-valor); // Buscamos el -numero para buscar la compatibilidad
       
        if (it2 != lnum.end()) {
            list<string> L = (*it2).second; // Lista de nombres compatibles
            for (auto it3 = L.begin(); it3 != L.end(); it3++) {
                if ((*it3) != (*it).first) {
                    cout << " " << *it3;
                }
            }
        } 
        cout << endl;
    }
   
}