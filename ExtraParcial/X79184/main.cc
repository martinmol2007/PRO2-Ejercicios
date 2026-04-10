#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {
    string comando;
    
    // First: Nombre de la persona | Second: Edad de esa persona
    map<string, int> nombre_edad;
    // First: Edad | Second: Conjunto de personas con esa misma edad
    map<int, set<string>> edad_gente;

    while (cin >> comando) {
        if (comando == "NEWPERSON") {
            string name;
            int edad;

            cin >> name >> edad;

            nombre_edad.insert({name, edad});
            edad_gente[edad].insert(name);
        }
        else if (comando == "BIRTHDAY") {
            string name;
            cin >> name;

            int edad_ant = nombre_edad[name];
            nombre_edad[name]++;
            int edad_des = nombre_edad[name];

            auto it = edad_gente[edad_ant].find(name);
            edad_gente[edad_ant].erase(it);
            edad_gente[edad_des].insert(name);

        }
        else if (comando == "NUMBERWITHAGE") {
            int n;
            cin >> n;
            
            cout << edad_gente[n].size() << endl;
        }
        else { // PEOPLEWITHAGE
            int n;
            cin >> n;
            auto it2 = edad_gente[n].begin();
            for (auto it = edad_gente[n].begin(); it != edad_gente[n].end(); it++) {
                if (it != it2) cout << " ";
                cout << *it;
            }
            cout << endl;
        }
    }
}